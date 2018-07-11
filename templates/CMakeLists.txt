cmake_minimum_required(VERSION 2.8.9)
project (templates)

set(CMAKE_CXX_STANDARD 11)

find_package(Threads)

add_executable(template_class src/template_class.cpp)
add_executable(template_function src/template_function.cpp)
add_executable(shared_ptr_example src/shared_ptr_example.cpp)

target_link_libraries(shared_ptr_example ${CMAKE_THREAD_LIBS_INIT})
