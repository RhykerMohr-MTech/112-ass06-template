#include "unity.h"
#include <string.h>

int   my_isdigit(char c);
int   my_islower(char c);
int   my_strlen(char s[]);
void  my_strcpy(char dest[], char src[]);
int   my_atoi(char s[]);

void setUp(void)    {}
void tearDown(void) {}


// ============================================================
// my_isdigit
// ============================================================

void test_isdigit_zero(void)
{
    TEST_ASSERT_EQUAL_INT(1, my_isdigit('0'));
}

void test_isdigit_five(void)
{
    TEST_ASSERT_EQUAL_INT(1, my_isdigit('5'));
}

void test_isdigit_nine(void)
{
    TEST_ASSERT_EQUAL_INT(1, my_isdigit('9'));
}

void test_isdigit_slash(void)
{
    TEST_ASSERT_EQUAL_INT(0, my_isdigit('/'));
}

void test_isdigit_colon(void)
{
    TEST_ASSERT_EQUAL_INT(0, my_isdigit(':'));
}

void test_isdigit_letter(void)
{
    TEST_ASSERT_EQUAL_INT(0, my_isdigit('a'));
}

void test_isdigit_space(void)
{
    TEST_ASSERT_EQUAL_INT(0, my_isdigit(' '));
}


// ============================================================
// my_islower
// ============================================================

void test_islower_a(void)
{
    TEST_ASSERT_EQUAL_INT(1, my_islower('a'));
}

void test_islower_m(void)
{
    TEST_ASSERT_EQUAL_INT(1, my_islower('m'));
}

void test_islower_z(void)
{
    TEST_ASSERT_EQUAL_INT(1, my_islower('z'));
}

void test_islower_backtick(void)
{
    TEST_ASSERT_EQUAL_INT(0, my_islower('`'));
}

void test_islower_open_brace(void)
{
    TEST_ASSERT_EQUAL_INT(0, my_islower('{'));
}

void test_islower_uppercase(void)
{
    TEST_ASSERT_EQUAL_INT(0, my_islower('A'));
}

void test_islower_digit(void)
{
    TEST_ASSERT_EQUAL_INT(0, my_islower('1'));
}


// ============================================================
// my_strlen
// ============================================================

void test_strlen_empty(void)
{
    TEST_ASSERT_EQUAL_INT(0, my_strlen(""));
}

void test_strlen_single(void)
{
    TEST_ASSERT_EQUAL_INT(1, my_strlen("a"));
}

void test_strlen_hello(void)
{
    TEST_ASSERT_EQUAL_INT(5, my_strlen("hello"));
}

void test_strlen_with_space(void)
{
    TEST_ASSERT_EQUAL_INT(11, my_strlen("hello world"));
}

void test_strlen_numbers(void)
{
    TEST_ASSERT_EQUAL_INT(3, my_strlen("123"));
}


// ============================================================
// my_strcpy
// ============================================================

void test_strcpy_hello(void)
{
    char buf[64];
    my_strcpy(buf, "hello");
    TEST_ASSERT_EQUAL_STRING("hello", buf);
}

void test_strcpy_world(void)
{
    char buf[64];
    my_strcpy(buf, "world");
    TEST_ASSERT_EQUAL_STRING("world", buf);
}

void test_strcpy_empty(void)
{
    char buf[64];
    buf[0] = 'x';
    my_strcpy(buf, "");
    TEST_ASSERT_EQUAL_STRING("", buf);
}

void test_strcpy_null_terminator(void)
{
    char buf[64];
    my_strcpy(buf, "abc");
    TEST_ASSERT_EQUAL_INT('\0', buf[3]);
}

void test_strcpy_overwrite(void)
{
    char buf[64];
    my_strcpy(buf, "hello");
    my_strcpy(buf, "hi");
    TEST_ASSERT_EQUAL_STRING("hi", buf);
}


// ============================================================
// my_atoi
// ============================================================

void test_atoi_zero(void)
{
    TEST_ASSERT_EQUAL_INT(0, my_atoi("0"));
}

void test_atoi_positive(void)
{
    TEST_ASSERT_EQUAL_INT(42, my_atoi("42"));
}

void test_atoi_three_digits(void)
{
    TEST_ASSERT_EQUAL_INT(123, my_atoi("123"));
}

void test_atoi_negative_one(void)
{
    TEST_ASSERT_EQUAL_INT(-1, my_atoi("-1"));
}

void test_atoi_negative_large(void)
{
    TEST_ASSERT_EQUAL_INT(-999, my_atoi("-999"));
}

void test_atoi_single_digit(void)
{
    TEST_ASSERT_EQUAL_INT(7, my_atoi("7"));
}


// ============================================================
// runTests + main
// ============================================================

void runTests(void)
{
    UNITY_BEGIN();

    RUN_TEST(test_isdigit_zero);
    RUN_TEST(test_isdigit_five);
    RUN_TEST(test_isdigit_nine);
    RUN_TEST(test_isdigit_slash);
    RUN_TEST(test_isdigit_colon);
    RUN_TEST(test_isdigit_letter);
    RUN_TEST(test_isdigit_space);

    RUN_TEST(test_islower_a);
    RUN_TEST(test_islower_m);
    RUN_TEST(test_islower_z);
    RUN_TEST(test_islower_backtick);
    RUN_TEST(test_islower_open_brace);
    RUN_TEST(test_islower_uppercase);
    RUN_TEST(test_islower_digit);

    RUN_TEST(test_strlen_empty);
    RUN_TEST(test_strlen_single);
    RUN_TEST(test_strlen_hello);
    RUN_TEST(test_strlen_with_space);
    RUN_TEST(test_strlen_numbers);

    RUN_TEST(test_strcpy_hello);
    RUN_TEST(test_strcpy_world);
    RUN_TEST(test_strcpy_empty);
    RUN_TEST(test_strcpy_null_terminator);
    RUN_TEST(test_strcpy_overwrite);

    RUN_TEST(test_atoi_zero);
    RUN_TEST(test_atoi_positive);
    RUN_TEST(test_atoi_three_digits);
    RUN_TEST(test_atoi_negative_one);
    RUN_TEST(test_atoi_negative_large);
    RUN_TEST(test_atoi_single_digit);

    UNITY_END();
}