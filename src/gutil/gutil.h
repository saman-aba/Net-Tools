#ifndef GUTIL_H
#define GUTIL_H
#include <stdint.h>

typedef struct tbl_header	tbl_header_t;
typedef struct tbl_data		tbl_data_t;

struct tbl_header {
	uint32_t inx;
	char* name;
	tbl_header_t* next;
};

struct tbl_data {
	uint32_t col;
	uint32_t raw;

	tbl_data_t* next;
};

typedef struct tbl {
	uint32_t ncol;
	uint32_t nraw;

	tbl_header_t* hdr;
	tbl_data_t* data;
} table_t;

void print_table(table_t* tbl);
void print_line(size_t size);
void print_labled_line(size_t size);

#define TABLE(x) print_table(x)



#endif