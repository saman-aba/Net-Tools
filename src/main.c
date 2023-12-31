#include <stdlib.h>
#include <stdio.h>
//#include <pcap.h>
#include "dns_parser.h"
#include "gutils.h"


const char github_req[] = {
        0xf6, 0xd7, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x67, 0x69, 0x74,
        0x68, 0x75, 0x62, 0x0c, 0x67, 0x69, 0x74, 0x68, 0x75, 0x62, 0x61, 0x73, 0x73, 0x65, 0x74, 0x73,
        0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01

};

const char github_resp[] = {
        0xe9, 0xda, 0x81, 0x80, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x06, 0x67, 0x69, 0x74,
        0x68, 0x75, 0x62, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x01, 0x00, 0x01, 0xc0, 0x0c, 0x00, 0x01,
        0x00, 0x01, 0x00, 0x00, 0x01, 0x46, 0x00, 0x04, 0x8c, 0x52, 0x79, 0x03


};

const char req[] ={
        0x01, 0x63, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 
        0x00, 0x00, 0x00, 0x01, 0x05, 0x61, 0x6c, 0x69, 
        0x76, 0x65, 0x06, 0x67, 0x69, 0x74, 0x68, 0x75, 
        0x62, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x1c, 
        0x00, 0x01, 0x00, 0x00, 0x29, 0x05, 0xc0, 0x00, 
        0x00, 0x00, 0x00, 0x00, 0x00};

const char req2[] = {
        0xfa, 0x14, 0x81, 0x80, 0x00, 0x01, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x05, 0x61, 0x62, 0x6f,
        0x75, 0x74, 0x06, 0x67, 0x69, 0x74, 0x6c, 0x61, 0x62, 0x03, 0x63, 0x6f, 0x6d, 0x00, 0x00, 0x1c,
        0x00, 0x01, 0xc0, 0x0c, 0x00, 0x1c, 0x00, 0x01, 0x00, 0x00, 0x01, 0x2c, 0x00, 0x10, 0x2a, 0x06,
        0x98, 0xc1, 0x31, 0x23, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0, 0x0c,
        0x00, 0x1c, 0x00, 0x01, 0x00, 0x00, 0x01, 0x2c, 0x00, 0x10, 0x2a, 0x06, 0x98, 0xc1, 0x31, 0x22,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x29, 0x02, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00};

const char req3[] = {
        0x07, 0x7f, 0x81, 0x80, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x07, 0x66, 0x69, 0x72,
        0x65, 0x66, 0x6f, 0x78, 0x08, 0x73, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x08, 0x73, 0x65,
        0x72, 0x76, 0x69, 0x63, 0x65, 0x73, 0x07, 0x6d, 0x6f, 0x7a, 0x69, 0x6c, 0x6c, 0x61, 0x03, 0x63,
        0x6f, 0x6d, 0x00, 0x00, 0x1c, 0x00, 0x01, 0xc0, 0x0c, 0x00, 0x05, 0x00, 0x01, 0x00, 0x00, 0x02,
        0x09, 0x00, 0x32, 0x04, 0x70, 0x72, 0x6f, 0x64, 0x0f, 0x72, 0x65, 0x6d, 0x6f, 0x74, 0x65, 0x2d,
        0x73, 0x65, 0x74, 0x74, 0x69, 0x6e, 0x67, 0x73, 0x04, 0x70, 0x72, 0x6f, 0x64, 0x0b, 0x77, 0x65,
        0x62, 0x73, 0x65, 0x72, 0x76, 0x69, 0x63, 0x65, 0x73, 0x06, 0x6d, 0x6f, 0x7a, 0x67, 0x63, 0x70,
        0x03, 0x6e, 0x65, 0x74, 0x00, 0xc0, 0x48, 0x00, 0x06, 0x00, 0x01, 0x00, 0x00, 0x00, 0xde, 0x00,
        0x4e, 0x0b, 0x6e, 0x73, 0x2d, 0x63, 0x6c, 0x6f, 0x75, 0x64, 0x2d, 0x61, 0x31, 0x0d, 0x67, 0x6f,
        0x6f, 0x67, 0x6c, 0x65, 0x64, 0x6f, 0x6d, 0x61, 0x69, 0x6e, 0x73, 0xc0, 0x2e, 0x14, 0x63, 0x6c,
        0x6f, 0x75, 0x64, 0x2d, 0x64, 0x6e, 0x73, 0x2d, 0x68, 0x6f, 0x73, 0x74, 0x6d, 0x61, 0x73, 0x74,
        0x65, 0x72, 0x06, 0x67, 0x6f, 0x6f, 0x67, 0x6c, 0x65, 0xc0, 0x2e, 0x00, 0x00, 0x00, 0x01, 0x00,
        0x00, 0x54, 0x60, 0x00, 0x00, 0x0e, 0x10, 0x00, 0x03, 0xf4, 0x80, 0x00, 0x00, 0x01, 0x2c, 0x00,
        0x00, 0x29, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};



const char resp[] ={0xc0};

int main ()
{
    dns_msg_t *msg;
    msg = parse_dns(req3,0);
    print_dns_header(msg);
    print_dns_question(msg);
    for(dns_rr_t *rr = msg->answer ; rr != NULL; rr = rr->next)
    {
        print_dns_rr(rr);
    }
}
// int main(int argc, char **argv)
// {
//     tbl_hdr_t *header,*root_hdr;
//     header = malloc(sizeof(tbl_hdr_t));

//     header->name = "Data";
//     root_hdr = header;
    
//     for(int i = 0 ; i < 5 ; i++)
//     {
//         tbl_hdr_t *hdr;
//         hdr = malloc(sizeof(tbl_hdr_t));
//         hdr->name = "Data";
//         header->next = hdr;
//         header = hdr;
//     }

    
    
//     table_t table;
//     table.cols = 5;
//     table.raws = 5;
//     table.hdr = root_hdr;
//     print_line(40,"Hello every one", '-');
//     print_table(&table);
//     // uint32_t offset = 0;
//     // dns_msg_t *dns = parse_dns(req, offset);
//     // print_dns_header(dns);
//     // print_dns_question(dns);
//     // return 0;
// }



// // #include <stdio.h>
// // #include <pcap.h>

// // void packet_handler(unsigned char *data, struct pcap_pkthdr *hdr,
// // 			     const unsigned char *packet)
// // {
// //     printf("Packet len: %d\n",hdr->len);
// //     printf("Received : %s\n", packet);

// // }

// // #define MAX_PACKETS 10
// // int main()
// // {
// //     char error_buffer[PCAP_ERRBUF_SIZE];
// //     pcap_if_t *devs;
// //     pcap_t *handle;
// //     pcap_handler *hdlr;

// //     if(pcap_findalldevs(&devs, error_buffer) == -1)
// //     {
// //         printf("Something went wrong: %s", error_buffer);
// //         return 0;
// //     }    
// //     for(pcap_if_t *dev = devs; dev != NULL ; dev = dev->next)
// //     {
// //         handle = pcap_open_live(dev->name, BUFSIZ,1, 1000,error_buffer);
// //         if(handle)
// //             break;        
// //     }
    
// //     if(pcap_loop(handle, MAX_PACKETS,packet_handler,error_buffer) == -1)
// //         {
// //             printf("Something went wrong: %s", error_buffer);
// //             return 0;
// //         }
// //     return 0;    
// // }


// #include "test/test_utils.h"
// #include "test/test_local.h"


// int main(int argc, char *argv[])
// {
//     int ret = EXIT_FAILURE;
//     int setup_res;

//     if ((setup_res = setup_tests()) > 0) {
//         ret = run_tests(argv[0]);
//         cleanup_tests();
//     }
//     return ret;
// }
