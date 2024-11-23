cmake_minimum_required(VERSION 3.28)
project(c_repo C)

set(CMAKE_C_STANDARD 99)

add_executable(c_repo
        chapter15/file1.c
        chapter15/file2.c
)
