cmake_minimum_required(VERSION 3.10)
project(data_structure C)

set(CMAKE_C_STANDARD 11)

include_directories(List Sqlist Dlist)

add_executable(data_structure
        List/list.h
        Sqlist/sqlist.h Dlist/dlist.h main.c)
