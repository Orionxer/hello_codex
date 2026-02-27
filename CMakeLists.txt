cmake_minimum_required(VERSION 3.10)

set(CMAKE_C_COMPILER "gcc")

project(HelloWorld C)

set(CMAKE_C_STANDARD 11)

add_executable(hello_world hello_world.c)
