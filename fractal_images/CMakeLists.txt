cmake_minimum_required(VERSION 2.8.9)
project(fractal_images)

add_compile_options(-std=c++11)

include_directories(include)

add_library(bitmap src/bitmap.cpp)
add_library(mandelbrot src/mandelbrot.cpp)

add_executable(main src/main.cpp)
add_executable(virtual_destructor src/virtual_destructor.cpp)

target_link_libraries(main bitmap mandelbrot)
