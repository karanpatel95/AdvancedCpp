cmake_minimum_required(VERSION 2.8.9)
project (function_pointers)

set(CMAKE_CXX_STANDARD 11)

add_executable(function_pointer src/function_pointer.cpp)
add_executable(call_function_pointer src/call_function_pointer.cpp)
add_executable(object_slicing_polymorphism src/object_slicing_polymorphism.cpp)
add_executable(abstract_class src/abstract_class.cpp)
add_executable(functors src/functors.cpp)
