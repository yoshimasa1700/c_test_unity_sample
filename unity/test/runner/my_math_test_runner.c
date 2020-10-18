#include <unity.h>
#include <unity_fixture.h>

TEST_GROUP_RUNNER( MyMath )
{
  RUN_TEST_CASE( MyMath, my_math_should_return_1_where_exponent_is_0 );
  RUN_TEST_CASE( MyMath, my_math_should_return_minus_1_where_exponent_is_negative );
  RUN_TEST_CASE( MyMath, my_math_should_return_minus_100_where_exponent_is_larger_than_10 );
  RUN_TEST_CASE( MyMath, my_math_should_return_powered_2_otherwise );
}

static void RunAllTests(){
  RUN_TEST_GROUP(MyMath);
}

int main(int argc, char const **argv){
  return UnityMain(argc, argv, RunAllTests);
}
