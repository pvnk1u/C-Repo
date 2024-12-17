cmake_minimum_required(VERSION 3.28)
project(c_repo C)

set(CMAKE_C_STANDARD 99)

add_executable(c_repo
        chapter16/struct.c
        chapter16/inventory.c
        chapter16/readline.h
        chapter16/readline.c
)
