cmake_minimum_required(VERSION 3.30)
project(virtualmachine)

set(CMAKE_CXX_STANDARD 23)

add_executable(virtualmachine main.cpp
        vm/cpu.h
        main.h)
