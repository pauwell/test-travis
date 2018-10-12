cmake_minimum_required(VERSION 3.9.2)

project(test-travis)
add_executable(test-travis "main.cpp")
target_compile_features(test-travis PRIVATE cxx_std_17)
