cmake_minimum_required(VERSION 2.8.9)
project (function_pointers)

set(CMAKE_CXX_STANDARD 11)

add_executable(function_pointer src/function_pointer.cpp)
add_executable(call_function_pointer src/call_function_pointer.cpp)
