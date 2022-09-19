cmake_minimum_required(VERSION 3.22)
project(WP5)

set(CMAKE_CXX_STANDARD 14)

add_executable(WP5 main.cpp Map.h Map.cpp Filter.h Filter.cpp Reduce.h Reduce.cpp)
