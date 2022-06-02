#include "unity.h"
#include "test.h"
#include <stdio.h>

void setUp(void) {

}

void tearDown(void) {

}

void test_function(void) {
    TEST_ASSERT_EQUAL(test_func(1, AAA), 101);
    TEST_ASSERT_EQUAL(test_func(2, AAA), 102);
}

int test_func(int a, int b){
    if (a == 3) {
        a++;
    }
    return a + b;
}

int main(){
    UNITY_BEGIN();
    RUN_TEST(test_function);
    return UNITY_END();
}
