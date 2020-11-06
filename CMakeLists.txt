# cmake_minimum_required(VERSION <specify CMake version here>)
project(Projects)

set(CMAKE_CXX_STANDARD 17)

add_executable(Projects main.cpp node.cpp List.h List.cpp)