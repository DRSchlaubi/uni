cmake_minimum_required(VERSION 4.0)
project(c C)

set(CMAKE_C_STANDARD 11)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

include(ue1/CMakeLists.txt)

add_executable(c main.c)
