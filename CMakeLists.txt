cmake_minimum_required(VERSION 3.28)
project(c_repo C)

set(CMAKE_C_STANDARD 99)

add_executable(c_repo
        chapter15/word.h
        chapter15/line.h
        chapter15/justify.c
        chapter15/word.c
        chapter15/line.c
)
