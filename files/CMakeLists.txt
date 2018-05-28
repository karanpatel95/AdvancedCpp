cmake_minimum_required(VERSION 2.8.9)
project (files)

add_compile_options(-std=c++11)
add_executable(writing_file src/writing_file.cpp)
add_executable(reading_file src/reading_file.cpp)
add_executable(parsing_file src/parsing_file.cpp)
add_executable(structs_and_padding src/structs_and_padding.cpp)
add_executable(reading_binary src/reading_binary.cpp)
