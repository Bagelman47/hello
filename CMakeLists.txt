cmake_minimum_required(VERSION 3.20)
project(hello LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(hello hello.cpp)

enable_testing()
add_executable(greeting_tests tests/greeting_tests.cpp)
add_test(NAME greeting_tests COMMAND greeting_tests)
