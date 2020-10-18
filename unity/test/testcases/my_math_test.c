#include <unity.h>
#include <unity_fixture.h>

#include "my_math.h"


TEST_GROUP( MyMath );


TEST_SETUP( MyMath )
{}


TEST_TEAR_DOWN( MyMath )
{}


/**
 * 0 のときは常に 1 を返します
 * 0 を与えて 1 が返ってくることをテストします
 */
TEST( MyMath, my_math_should_return_1_where_exponent_is_0 )
{
    TEST_ASSERT_EQUAL( 1, my_math( 0 ) );
}

/**
 * 負数では -1 を返します
 * 適当な負数をテストしてみます
 */
TEST( MyMath, my_math_should_return_minus_1_where_exponent_is_negative )
{
    TEST_ASSERT_EQUAL( -1, my_math( -1 ) );
    TEST_ASSERT_EQUAL( -1, my_math( -2 ) );
    TEST_ASSERT_EQUAL( -1, my_math( -3 ) );
    TEST_ASSERT_EQUAL( -1, my_math( -4 ) );
    TEST_ASSERT_EQUAL( -1, my_math( -5 ) );
    TEST_ASSERT_EQUAL( -1, my_math( -5928 ) );
}

/**
 * 10 以降では -100 を返します
 * 適当な大きい数をテストしてみます
 */
TEST( MyMath, my_math_should_return_minus_100_where_exponent_is_larger_than_10 )
{
    TEST_ASSERT_EQUAL(  1024, my_math( 10 ) );
    TEST_ASSERT_EQUAL( -100,  my_math( 11 ) );
    TEST_ASSERT_EQUAL( -100,  my_math( 15 ) );
    TEST_ASSERT_EQUAL( -100,  my_math( 400 ) );
    TEST_ASSERT_EQUAL( -100,  my_math( 59284 ) );
    TEST_ASSERT_EQUAL( -100,  my_math( 213007 ) );
}

/**
 * 1 〜 10 の範囲では 2^n を返します
 * すべてテストしてみます
 */
TEST( MyMath, my_math_should_return_powered_2_otherwise )
{
    TEST_ASSERT_EQUAL( 2,    my_math( 1 ) );
    TEST_ASSERT_EQUAL( 4,    my_math( 2 ) );
    TEST_ASSERT_EQUAL( 8,    my_math( 3 ) );
    TEST_ASSERT_EQUAL( 16,   my_math( 4 ) );
    TEST_ASSERT_EQUAL( 32,   my_math( 5 ) );
    TEST_ASSERT_EQUAL( 64,   my_math( 6 ) );
    TEST_ASSERT_EQUAL( 128,  my_math( 7 ) );
    TEST_ASSERT_EQUAL( 256,  my_math( 8 ) );
    TEST_ASSERT_EQUAL( 512,  my_math( 9 ) );
    TEST_ASSERT_EQUAL( 1024, my_math( 10 ) );
}
