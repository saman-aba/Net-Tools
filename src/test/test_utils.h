#ifndef TEST_UTILS
#define TEST_UTILS

#include <assert.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdint.h>

# define N_ELEMENTS(x)    (sizeof(x)/sizeof((x)[0]))
#define SKIP_TEST  123

void add_test(const char *test_case_name, int (*test_fn) (void));
void add_all_tests(const char *test_case_name, int(*test_fn)(int idx), int num, int subtest);

int setup_tests(void);
void cleanup_tests(void);


# define ADD_TEST(test_function) add_test(#test_function, test_function)
# define ADD_ALL_TESTS(test_function, num) add_all_tests(#test_function, test_function, num, 1)

# define TEST_ptr_eq(a, b)      test_ptr_eq(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_ptr_ne(a, b)      test_ptr_ne(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_ptr(a)            test_ptr(__FILE__, __LINE__, #a, a)
# define TEST_ptr_null(a)       test_ptr_null(__FILE__, __LINE__, #a, a)

# define TEST_true(a)           test_true(__FILE__, __LINE__, #a, (a) != 0)
# define TEST_false(a)          test_false(__FILE__, __LINE__, #a, (a) != 0)

#define TEST_int_eq(a,b)        test_int_eq(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_int_ne(a,b)        test_int_ne(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_int_lt(a,b)        test_int_lt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_int_le(a,b)        test_int_le(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_int_gt(a,b)        test_int_gt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_int_ge(a,b)        test_int_ge(__FILE__, __LINE__, #a, #b, a, b)

#define TEST_uint_eq(a,b)       test_uint_eq(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_uint_ne(a,b)       test_uint_ne(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_uint_lt(a,b)       test_uint_lt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_uint_le(a,b)       test_uint_le(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_uint_gt(a,b)       test_uint_gt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_uint_ge(a,b)       test_uint_ge(__FILE__, __LINE__, #a, #b, a, b)

#define TEST_char_eq(a,b)       test_char_eq(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_char_ne(a,b)       test_char_ne(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_char_lt(a,b)       test_char_lt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_char_le(a,b)       test_char_le(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_char_gt(a,b)       test_char_gt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_char_ge(a,b)       test_char_ge(__FILE__, __LINE__, #a, #b, a, b)

#define TEST_uchar_eq(a,b)      test_uchar_eq(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_uchar_ne(a,b)      test_uchar_ne(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_uchar_lt(a,b)      test_uchar_lt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_uchar_le(a,b)      test_uchar_le(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_uchar_gt(a,b)      test_uchar_gt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_uchar_ge(a,b)      test_uchar_ge(__FILE__, __LINE__, #a, #b, a, b)

#define TEST_long_eq(a,b)       test_long_eq(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_long_ne(a,b)       test_long_ne(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_long_lt(a,b)       test_long_lt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_long_le(a,b)       test_long_le(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_long_gt(a,b)       test_long_gt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_long_ge(a,b)       test_long_ge(__FILE__, __LINE__, #a, #b, a, b)

#define TEST_ulong_eq(a,b)      test_ulong_eq(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_ulong_ne(a,b)      test_ulong_ne(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_ulong_lt(a,b)      test_ulong_lt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_ulong_le(a,b)      test_ulong_le(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_ulong_gt(a,b)      test_ulong_gt(__FILE__, __LINE__, #a, #b, a, b)
#define TEST_ulong_ge(a,b)      test_ulong_ge(__FILE__, __LINE__, #a, #b, a, b)

# define TEST_int64_t_eq(a, b)  test_int64_t_eq(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_int64_t_ne(a, b)  test_int64_t_ne(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_int64_t_lt(a, b)  test_int64_t_lt(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_int64_t_le(a, b)  test_int64_t_le(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_int64_t_gt(a, b)  test_int64_t_gt(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_int64_t_ge(a, b)  test_int64_t_ge(__FILE__, __LINE__, #a, #b, a, b)

# define TEST_uint64_t_eq(a, b) test_uint64_t_eq(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_uint64_t_ne(a, b) test_uint64_t_ne(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_uint64_t_lt(a, b) test_uint64_t_lt(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_uint64_t_le(a, b) test_uint64_t_le(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_uint64_t_gt(a, b) test_uint64_t_gt(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_uint64_t_ge(a, b) test_uint64_t_ge(__FILE__, __LINE__, #a, #b, a, b)

# define TEST_size_t_eq(a, b)   test_size_t_eq(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_size_t_ne(a, b)   test_size_t_ne(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_size_t_lt(a, b)   test_size_t_lt(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_size_t_le(a, b)   test_size_t_le(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_size_t_gt(a, b)   test_size_t_gt(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_size_t_ge(a, b)   test_size_t_ge(__FILE__, __LINE__, #a, #b, a, b)

# define TEST_double_eq(a, b)   test_double_eq(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_double_ne(a, b)   test_double_ne(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_double_lt(a, b)   test_double_lt(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_double_le(a, b)   test_double_le(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_double_gt(a, b)   test_double_gt(__FILE__, __LINE__, #a, #b, a, b)
# define TEST_double_ge(a, b)   test_double_ge(__FILE__, __LINE__, #a, #b, a, b)
#endif