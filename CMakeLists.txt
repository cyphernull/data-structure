cmake_minimum_required(VERSION 3.10)
project(data_structure C)

set(CMAKE_C_STANDARD 11)

include_directories(List)
include_directories(Sqlist)

add_executable(data_structure
        List/list.h
        Sqlist/sqlist.h main.c Dlist/dlist.h)
