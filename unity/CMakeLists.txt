cmake_minimum_required( VERSION 3.2 )
project( unity_test )

set( UNITY_ROOT Unity )

set(CMAKE_C_FLAGS "-Wall -DUNITY_FIXTURE_NO_EXTRAS")

include_directories( ${UNITY_ROOT}/src )
include_directories( ${UNITY_ROOT}/extras/fixture/src )
include_directories( include/ )
include_directories( src/ )
link_libraries( m )

set(
    UNITY_FILES

        ${UNITY_ROOT}/src/unity.c
        ${UNITY_ROOT}/extras/fixture/src/unity_fixture.c
)

set(
    TEST_FILES

        test/testcases/my_math_test.c
        # test/testcases/my_string_test.c
)

set(
    SOURCE_FILES

        src/my_math.c
        # src/my_string.c
)

set(
    TEST_RUNNER_FILES

        test/runner/my_math_test_runner.c
        # test/runner/my_string_test_runner.c
        # test/runner/all_tests.c
)

add_executable( unity_test ${SOURCE_FILES} ${TEST_FILES} ${TEST_RUNNER_FILES} ${UNITY_FILES} )
