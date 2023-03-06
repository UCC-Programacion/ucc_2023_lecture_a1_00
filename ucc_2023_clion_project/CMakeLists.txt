cmake_minimum_required(VERSION 3.24)
project(ucc_2023_00)

set(CMAKE_CXX_STANDARD 17)

add_executable(ucc_2023_00 main.cpp sum.cpp)

add_executable(ucc_2023_00_test main_test.cpp)
