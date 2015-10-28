cmake_minimum_required (VERSION 2.6)
project (gtest_boilerplate)

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

enable_testing()
add_executable(RunTest tests.cpp)
target_link_libraries(RunTest ${GTEST_BOTH_LIBRARIES})
add_test(NAME AllTestsInMain COMMAND RunTest)