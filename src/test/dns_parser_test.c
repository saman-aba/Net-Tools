
#include "test_utils.h"

static int print_simple_test(void)
{
    int res = 0;
    TEST_true((5==4));
    res += TEST_int_eq(1,1);
    res += TEST_int_eq(3,3);
    res += TEST_int_eq(2,2);
    res += TEST_int_eq(17,17);
    return (res == 4 ? 1 : 0);
}

static int print_simple_test_2(void)
{
    int res;
    res += TEST_int_eq(1,0);
    res += TEST_int_eq(3,4);
    res += TEST_int_eq(2,8);
    res += TEST_int_eq(1,17);
    return (res == 4 ? 1 : 0) ;
}
int setup_tests(void)
{
    ADD_TEST(print_simple_test);
    ADD_TEST(print_simple_test_2);
}

void cleanup_tests(void)
{
}