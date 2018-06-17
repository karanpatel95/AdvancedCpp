cmake_minimum_required(VERSION 2.8.9)
project (operator_overloading)

add_compile_options(-std=c++11)

add_executable(assignment_operator src/assignment_operator.cpp)
add_executable(print_bitshift_operator src/print_bitshift_operator.cpp)
