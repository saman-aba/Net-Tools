#include "dns_parser.h"
#include "gutils.h"
#include <string.h>
#include < Ws2tcpip.h>

dns_msg_t *parse_dns(const char *in, uint32_t offt)
{
    dns_msg_t *dns = malloc(sizeof(dns_msg_t));
    dns->answer = NULL;
    
    dns_header_parser(in, &offt, &dns->dheader);
    dns_question_parser(in, &offt, dns);

    if(dns->dheader.ancount > 0)
    {
        dns_rr_t *root, *rr;
        root = malloc(sizeof(dns_rr_t));
        dns_rr_parser(in, &offt, root);

        for(int i = 1 ; i < dns->dheader.ancount ;i++)
        {
            rr = malloc(sizeof(dns_rr_t));
            dns_rr_parser(in , &offt, rr);    
            if(!root->next)
            {
                root->next = rr;
                rr = NULL;
            }
        }
        dns->answer = root;
    }
    return dns;
}

uint32_t dns_header_parser  (const char *in, uint32_t *offt, dns_header_t *hdr)
{
    if(!hdr)
        return -1;

    uint32_t position = *offt;
    
    hdr->id = (in[position] << 8) + in[position + 1];
    position += 2;

    hdr->QR     =   (in[position] & 0x80)   >> 7;
    hdr->opcode =   (in[position] & 0x70)   >> 4; 
    hdr->AA     =   (in[position] & 0x04)   >> 2;
    hdr->TC     =   (in[position] & 0x02)  >> 1;
    hdr->RD     =   in[position] & 0x01;
    position++;

    hdr->RA     =   (in[position] & 0x80)  >> 7;
    hdr->res    =   (in[position] & 0x40)  >> 6;
    hdr->AD     =   (in[position] & 0x20)  >> 5;
    hdr->CD     =   (in[position] & 0x10)  >> 4;
    hdr->rcode  =   in[position] & 0x0f;
    position++;

    hdr->qdcount =  (in[position] << 8) + in[position + 1] ;
    position += 2;
    hdr->ancount =  (in[position] << 8) + in[position + 1];
    position += 2;
    hdr->nscount =  (in[position] << 8) + in[position + 1];
    position += 2;
    hdr->arcount=   (in[position] << 8) + in[position + 1];   
    position += 2;

    *offt = position;
    return 0;
}

uint32_t dns_question_parser (const char *in, uint32_t *offt, dns_msg_t *out)
{
    if(out == NULL)
        return -1;
    uint32_t offset = *offt;
    dns_question_t *q = (dns_question_t *)malloc(sizeof(dns_question_t));
    
    uint32_t name_ln = 0, label_count = 0;
    q->qname = rr_name_parser(in, &offset, &q->nameln, &q->lblcount);
    q->qtype  = (in[offset] << 8) + in[offset + 1];
    offset += 2;
    q->qclass = (in[offset] << 8) + in[offset + 1];
    offset += 2;
    q->next = NULL;

    *offt = offset;
    out->question = q;
    
    return 0;
}

uint32_t dns_rr_parser (const char *in, uint32_t *offt, dns_rr_t *rr)
{
    if(rr == NULL)
        return -1;
    uint32_t offset = *offt;
    
    uint32_t name_ln = 0, label_count = 0;
    rr->name = rr_name_parser(in, &offset, &name_ln, &label_count);
    rr->type  = (in[offset] << 8) + in[offset + 1];
    offset += 2;
    rr->cls = (in[offset] << 8) + in[offset + 1];
    offset += 2;
    rr->ttl = (in[offset] << 24) + (in[offset + 1] << 16) + (in[offset + 2] << 8) + in[offset + 3];
    offset += 4;
    rr->rdlength = (in[offset] << 8) + in[offset + 1];
    offset += 2;
    rr->rdata = malloc(rr->rdlength);
    memcpy(rr->rdata, in + offset, rr->rdlength);
    offset += rr->rdlength;
    rr->next = NULL;

    *offt = offset;
    return 0;
}

char *rr_name_parser (const char *in, uint32_t *offt, uint32_t *ln, uint32_t *lbl_cnt)
{
    uint32_t    name_ln = 0,
                lbl_count = 0,
                lbl_len = 0, 
                position = *offt,
                name_pos;
    
    if((in[position] & 0xc0) == 0xc0)
    {
        position++;
        name_pos = in[position] & 0x3f;
    }else
        name_pos = position;

    while(in[name_pos] != 0x00)
    {
        lbl_len = in[name_pos] & 0x3f;
        name_pos++;
        name_ln += lbl_len;
        name_pos += lbl_len;
        lbl_count++;
    }

    name_ln += (lbl_count - 1);
    name_pos -= (name_ln + 1);

    int name_buf_size = name_ln + 1;
    char *name = (char *)malloc(name_buf_size);

    int name_offt = 0;
    while(in[name_pos] != 0X00)
    {
        lbl_len = in[name_pos] & 0x3f;
        name_pos++;
        
        for(int i = 0 ; i < lbl_len ; i++)
        {
            name[name_offt] = in[name_pos];
            name_pos++;
            name_offt++;
        }
        if(name_offt != name_ln)
        {
            name[name_offt] = '.';
            name_offt++;
        }
        
    }
    name[name_offt] = '\0';

    if((in[position - 1] & 0xc0) == 0xc0)
        *offt += 2;
    else
        *offt += name_ln + 2;
    *ln = name_ln;
    *lbl_cnt = lbl_count;
    return name;
}



void print_dns_header(dns_msg_t *msg)
{
    char *operation;
    switch (msg->dheader.opcode) {
        case OP_QUERY:  operation = "standard";
            break;
        case OP_IQUERY: operation = "Inverse Query";
            break;
        case OP_NOTIFY: operation = "Notify";
            break;
        case OP_STATUS: operation = "Status";
            break;
        case OP_DDNS:   operation = "Dynamic DNS";
            break;
        case OP_NSID:   operation = "NSID";
            break;
        default:
            break;
    }
    char *rcode;
    switch(msg->dheader.rcode)
    {
        case R_NOERR: rcode = "No error";
            break;
        case R_FORMERR1: rcode = "Format error";
            break;

    }
    LINE;
    printf("Q/R : \t\t%20s\nOp Code : \t%20s\nRCode : \t%20s\n",
           (msg->dheader.QR ? "Response": "Question"),
           operation,
           rcode);
    printf("Questions: \t%20u\nAnswers: \t%20u\nAuthorities: \t%20u\nAdditionals \t%20u\n",
           msg->dheader.qdcount,
           msg->dheader.ancount,
           msg->dheader.qdcount,
           msg->dheader.arcount);
}


void print_dns_question (dns_msg_t *msg)
{
    char *qtype;
    switch (msg->question->qtype) {
        case RR_TYP_A:      qtype = "A";
            break;
        case RR_TYP_QA:     qtype = "AAAA";
            break;
        case RR_TYP_CNAME:  qtype = "CNAME";
            break;
        case RR_TYP_NAPTR:  qtype = "NAPTR";
            break;
        case RR_TYP_NS:     qtype = "NS";
            break;
        default:
            break;
    }

    char *qclass;
    switch(msg->question->qclass)
    {
        case RR_CLS_CH: qclass = "CHAOS";
            break;
        case RR_CLS_HS: qclass = "HESIOD";
            break;
        case RR_CLS_IN: qclass = "IN";
            break;

    }
    LINE;
    printf("Name :\t%20s\nName Length :\t%20u\nLable Count :\t%20u\nClass :\t\t%20s\nType :\t\t%20s\n",
            msg->question->qname,
            msg->question->lblcount,
            msg->question->nameln,
            qclass,
            qtype);
}


void print_dns_rr (dns_rr_t *rr)
{
    if(!rr)
        return;
    for(dns_rr_t *res = rr;rr != NULL; rr = rr->next )
    {
        
        char *type;
        switch (rr->type) {
            case RR_TYP_A:      type = "A";
                break;
            case RR_TYP_QA:     type = "AAAA";
                break;
            case RR_TYP_CNAME:  type = "CNAME";
                break;
            case RR_TYP_NAPTR:  type = "NAPTR";
                break;
            case RR_TYP_NS:     type = "NS";
                break;
            default:
                break;
        }

        char *class;
        switch(rr->cls)
        {
            case RR_CLS_CH: class = "CHAOS";
                break;
            case RR_CLS_HS: class = "HESIOD";
                break;
            case RR_CLS_IN: class = "IN";
                break;

        }
        LINE;
        char address[INET_ADDRSTRLEN];

        //inet_pton(AF_INET6, rr->rdata, address);
        //if (rr->type == RR_TYP_A)
        //{
        //     InetPtonW(
        //        AF_INET,
        //        rr->rdata,
        //        address
        //    );
        //    //inet_ntop(AF_INET, (struct sockaddr_in*)rr->rdata, address, rr->rdlength);
        //}
        //else
        //{
        //    InetPtonW(
        //        AF_INET6,
        //        rr->rdata,
        //        address
        //    );
        //    
            //inet_ntop(AF_INET6, (struct sockaddr_in*)rr->rdata, address, rr->rdlength);

        //}        
        /*if (rr->type == RR_TYP_A)
        {
            struct in_addr addr;
            memcpy(&addr, rr->rdata, sizeof(struct in_addr));
            inet_ntop(AF_INET, &addr, address, sizeof(address));
        }
        else
        {*/
            
        //}
        //inet_ntop(AF_INET6, (struct sockaddr_in*)addr, address, rr->rdlength);

        printf("Name : \t\t%20s\nClass : \t%20s\nType : \t\t%20s\nTTL : \t\t%20u\nData Length : \t%20u\nData : \t\t%20s\n",
                rr->name,
                class,
                type,
                rr->ttl,
                rr->rdlength,
                "");
    }
}