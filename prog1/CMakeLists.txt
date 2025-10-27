cmake_minimum_required(VERSION 4.0)
project(c C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_executable(c main.c
        ue1/blatt1_1.c
        ue1/blatt1_2.c
        ue1/blatt1_3.c
        ue1/blatt1_4.c
        ue1/blatt1_5.c)
