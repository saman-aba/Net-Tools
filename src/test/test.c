#include "test_utils.h"


static void print_fail_va(const char *prefix, const char *file,
                                 int line, const char *type,
                                 const char *left, const char *right,
                                 const char *op, const char *fmt, va_list ap)
{
    if (fmt != NULL) {
        printf("%s ",file);
        printf("%d ",line);
        vprintf(fmt, ap);
        printf("\n");
    }
    
}

static void print_fail(const char *prefix, const char *file,
                              int line, const char *type,
                              const char *left, const char *right,
                              const char *op, const char *fmt, ...)
{
    va_list ap;
    va_start(ap, fmt);
    print_fail_va(prefix, file, line, type, left, right, op, fmt, ap);
    va_end(ap);
}

int test_ptr(const char *file, int line, const char *s, const void *p)
{
    if (p != NULL)
        return 1;
    print_fail(NULL, file, line, "ptr", s, "NULL", "!=", "%p", p);
    return 0;
}

int test_true(const char *file, int line, const char *s, int b)
{
    if (b)
        return 1;
    print_fail(NULL, file, line, "bool", s, "true", "==", "false");
    return 0;
}

int test_false(const char *file, int line, const char *s, int b)
{
    if (!b)
        return 1;
    print_fail(NULL, file, line, "bool", s, "false", "==", "true");
    return 0;
}

#define IMPLEMENT_COMPARE(type, name, opname, op, fmt, cast)        \
    int test_ ## name ## _ ## opname( const char *file, int line,   \
                                const char *s1, const char *s2,     \
                                const type t1, const type t2)       \
    {                                                               \
        if(t1 op t2)                                                \
            return 1;                                               \
        print_fail(NULL, file, line, #type, s1, s2, #op,            \
                            "["fmt"] compared to ["fmt"]",          \
                            (cast)t1, (cast)t2);                    \
        return 0;                                                   \
    }                                                               \

#define IMPLEMENT_COMPARISONS(type, name, fmt, cast)                \
        IMPLEMENT_COMPARE(type, name, eq, ==, fmt, cast)            \
        IMPLEMENT_COMPARE(type, name, ne, !=, fmt, cast)            \
        IMPLEMENT_COMPARE(type, name, lt, <, fmt, cast)             \
        IMPLEMENT_COMPARE(type, name, le, <=, fmt, cast)            \
        IMPLEMENT_COMPARE(type, name, gt, >, fmt, cast)             \
        IMPLEMENT_COMPARE(type, name, ge, >=, fmt, cast)            \

IMPLEMENT_COMPARISONS( int, int, "%d", int)
IMPLEMENT_COMPARISONS( double, double, "%g", double)
IMPLEMENT_COMPARISONS( unsigned int, uint, "%u", unsigned int)
IMPLEMENT_COMPARISONS( char, char, "%c", char)
IMPLEMENT_COMPARISONS( unsigned char, uchar, "%u", unsigned char)
IMPLEMENT_COMPARISONS( long, long, "%ld", long)
IMPLEMENT_COMPARISONS( unsigned long, ulong, "%lu", unsigned long)
IMPLEMENT_COMPARISONS( int64_t, int64_t, "%lld", long long)
IMPLEMENT_COMPARISONS( uint64_t, uint64_t, "%llu", unsigned long long)

IMPLEMENT_COMPARE( void *, ptr, eq, ==, "%p", void *)
IMPLEMENT_COMPARE( void *, ptr, ne, !=, "%p", void *)