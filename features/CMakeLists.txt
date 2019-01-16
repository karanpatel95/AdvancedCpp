cmake_minimum_required(VERSION 2.8.9)
project (features)

add_compile_options(-std=c++11)

add_executable(decltype src/decltype.cpp)
add_executable(auto src/auto.cpp)
add_executable(enhanced_for_loop src/enhanced_for_loop.cpp)
