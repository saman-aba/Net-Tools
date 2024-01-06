#include "test_utils.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

typedef struct test_info {
    const char *test_case_name;
    int (*test_fn) (void);
    int (*param_test_fn)(int idx);
    int num;

    int subtest:1;
} TEST_INFO;

static TEST_INFO all_tests[256];
static int num_tests = 0;
static int num_test_cases = 0;

void add_test(const char *test_case_name, int (*test_fn) (void))
{
    assert(num_tests != N_ELEMENTS(all_tests));
    all_tests[num_tests].test_case_name = test_case_name;
    all_tests[num_tests].test_fn = test_fn;
    all_tests[num_tests].num = -1;
    ++num_tests;
    ++num_test_cases;
}

void add_all_tests(const char *test_case_name, int(*test_fn)(int idx),
                   int num, int subtest)
{
    assert(num_tests != N_ELEMENTS(all_tests));
    all_tests[num_tests].test_case_name = test_case_name;
    all_tests[num_tests].param_test_fn = test_fn;
    all_tests[num_tests].num = num;
    all_tests[num_tests].subtest = subtest;
    ++num_tests;
    if (subtest)
        ++num_test_cases;
    else
        num_test_cases += num;
}

static void finalize(int success)
{
    if (success)
    {

    }
    else
    {

    }
}

static char *test_title = NULL;

void set_test_title(const char *title)
{
    free(test_title);
    test_title = title == NULL ? NULL : strdup(title);
}

__attribute__ ((format(printf, 2, 3))) static void test_result(int result, const char *desc, ...)
{
    va_list ap;

    va_start(ap, desc);
    vprintf(desc, ap);
    va_end(ap);
    
    if (result== SKIP_TEST){
            printf(" # skipped");
    }
    else {
        printf("%10s ", result != 0 ? "ok" : "not ok");
    }
    
    printf("\n");
}
int run_tests(const char *test_prog_name)
{
    int num_failed = 0;
    int verdict = 1;
    int ii, i, jj, j, jstep;
    int test_case_count = 0;
    int subtest_case_count = 0;
    int permute[N_ELEMENTS(all_tests)];

    
    for (i = 0; i < num_tests; i++)
        permute[i] = i;
    
    for (ii = 0; ii != num_tests; ++ii) {
        i = permute[ii];
        if (all_tests[i].num == -1) {
            set_test_title(all_tests[i].test_case_name);
            verdict = all_tests[i].test_fn();
            finalize(verdict != 0);
            test_result(verdict, "%d - %s", test_case_count + 1, test_title);
            if (verdict == 0)
                num_failed++;
            test_case_count++;
        } 
    }
    if (num_failed != 0)
        return EXIT_FAILURE;
    return EXIT_SUCCESS;
}