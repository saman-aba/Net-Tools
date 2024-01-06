#ifndef TEST_LOCAL_H
#define TEST_LOCAL_H
#include <stdlib.h> 
#include "test_utils.h"

#define TEST_SKIP_CODE  123

int subtest_level(void);



int setup_test_framework(int argc, char *argv[]);
int pulldown_test_framework(int ret);

static void finalize(int success);
int run_tests(const char *test_prog_name);
void set_test_title(const char *title);

typedef enum OPTION_choice_default {
    OPT_ERR = -1,
    OPT_EOF = 0,
    OPT_TEST_ENUM
} OPTION_CHOICE_DEFAULT;
void opt_check_usage(void);

#endif