cmake_minimum_required(VERSION 3.8)
project(test-travis)

set(CMAKE_CXX_STANDARD 17)


set(SOURCE_FILES main.cpp)


# Tests
enable_testing()
add_subdirectory(tests)
add_executable(test-travis ${SOURCE_FILES})
