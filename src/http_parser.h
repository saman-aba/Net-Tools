#ifndef _HTTP_PARSER_H_
#define _HTTP_PARSER_H_

#include <stdint.h>

typedef struct http_req_msg             http_req_t;
typedef struct http_req_start_line      http_req_start_line_t;
typedef struct http_req_header          http_req_header_t;
typedef struct http_req_body            http_req_body_t;

typedef struct http_resp_msg            http_resp_t;
typedef struct http_resp_start_line     http_resp_start_line_t
typedef struct http_resp_header         http_resp_header_t;
typedef struct http_resp_body           http_resp_body_t;

struct http_resp_msg {
    http_resp_start_line_t  *st_ln;
    http_resp_header_t      *hdr;
    http_resp_body_t        *body;
};

struct http_req_header {
    char *req_url
}

struct http_start_line {

}

struct http_body {

}
