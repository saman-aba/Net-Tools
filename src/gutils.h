#ifndef GUTILS_H
#define GUTILS_H

#include <stdio.h>

typedef struct tbl_data_ tbl_data_t;

struct tbl_data_ {
    uint32_t col;
    uint32_t raw;
    char *data;
    tbl_data_t *next;
    tbl_data_t *prev;
    tbl_data_t *root;
};

typedef struct tbl_hdr_ {
    char *name;
    struct tbl_hdr_ *next;
    struct tbl_hdr_ *root;
} tbl_hdr_t;

typedef struct table_ {
    uint32_t cols;
    uint32_t raws;
    tbl_hdr_t *hdr;
    tbl_data_t *data;
} table_t;



// void print_line(size_t len,  char *text, char type)
// {
//     int text_pos = 0;
//     char line[len];
//     for(int i = 0 ; i < len ; i++)
//     {

//         if(text[text_pos])
//             {
//                 line[i] = text[text_pos];
//                 text_pos++;
//             }
//         else
//             line[i] = type;
//     }
//     printf("%s\n",line);
// }

// void fprint_line(size_t len,  char *text, char type)
// {
//     int text_pos = 0;
//     char line[len];
//     for(int i = 0 ; i < len ; i++)
//     {

//         if(text[text_pos])
//             {
//                 line[i] = text[text_pos];
//                 text_pos++;
//             }
//         else
//             line[i] = type;
//     }
//     // fprintf("%s\n",line);
// }



// void print_table(table_t *tbl)
// {
//     for(int raw = 0 ; raw < tbl->raws ; raw++)
//     {
//         for(int col = 0; col < tbl->cols; col++)
//         {
//             if(raw == 0 && tbl->hdr){
//                 printf("%-15s|",tbl->hdr->name);
//                 tbl->hdr = tbl->hdr->next;
//             }else{
//                 if(tbl->data)
//                 {
//                     printf("|%-15s",tbl->data->data);
//                     tbl->data = tbl->data->next;
//                 }
//             }
//         }
//         printf("\n");
//     }

// }
#define LINE printf("--------------------------------------------------\n");
#endif