#include "unity.h"
#include "calculator.h"
/* Required by the unity test framework */
void setUp() {}
/* Required by the unity test framework */
void tearDown() {}

void test_division(void)
{
    complex_t C1 = {10, 5};
    complex_t C2 = {5, 5};
    complex_t result = {1, 1};

    TEST_ASSERT_EQUAL(SUCCESS, division(&C1, &C2, &result));

    complex_t C3 = {0, 10};
    complex_t C4 = {10, 0};
    complex_t result1 = {0, 0};
    TEST_ASSERT_EQUAL(DIV_BY_ZERO, division(&C3, &C4, &result1));
    TEST_ASSERT_EQUAL(NULL_PTR, division(NULL, NULL, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, division(&C1, NULL, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, division(NULL, &C2, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, division(NULL, NULL, &result));
}

void test_sum(void)
{
    complex_t C1 = {0, 10};
    complex_t C2 = {10, 0};
    complex_t result = {10, 10};
    TEST_ASSERT_EQUAL(SUCCESS, sum(&C1, &C2, &result));
    TEST_ASSERT_EQUAL(NULL_PTR, sum(NULL, NULL, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, sum(&C1, NULL, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, sum(NULL, &C2, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, sum(NULL, NULL, &result));
}

void test_product(void)
{
    complex_t C1 = {5, 1};
    complex_t C2 = {5, 1};
    complex_t result = {24, 10};
    TEST_ASSERT_EQUAL(SUCCESS, product(&C1, &C2, &result));
    TEST_ASSERT_EQUAL(NULL_PTR, product(NULL, NULL, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, product(&C1, NULL, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, product(NULL, &C2, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, product(NULL, NULL, &result));
}

void test_difference(void)
{
    complex_t C1 = {10, 6};
    complex_t C2 = {5, 1};
    complex_t result = {5, 5};
    TEST_ASSERT_EQUAL(SUCCESS, difference(&C1, &C2, &result));
    TEST_ASSERT_EQUAL(NULL_PTR, difference(NULL, NULL, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, difference(&C1, NULL, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, difference(NULL, &C2, NULL));
    TEST_ASSERT_EQUAL(NULL_PTR, difference(NULL, NULL, &result));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_division);
    RUN_TEST(test_sum);
    RUN_TEST(test_product);
    RUN_TEST(test_difference);

    /* Close the Unity Test Framework */
    return UNITY_END();
}