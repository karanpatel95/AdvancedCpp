cmake_minimum_required(VERSION 2.8.9)
project (operator_overloading)

add_compile_options(-std=c++11)

include_directories(include)
add_library(complex_class src/complex_class.cpp)
add_library(complex_class2 src/complex_class2.cpp)

add_executable(assignment_operator src/assignment_operator.cpp)
add_executable(print_bitshift_operator src/print_bitshift_operator.cpp)
add_executable(complex_implement src/complex_implement.cpp)
add_executable(complex_implement2 src/complex_implement2.cpp)
add_executable(equality_operator src/equality_operator.cpp)

target_link_libraries(complex_implement complex_class)
target_link_libraries(complex_implement2 complex_class2)
target_link_libraries(equality_operator complex_class2)
