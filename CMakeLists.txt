cmake_minimum_required(VERSION 3.22)
project(kilo)

set(CMAKE_CXX_STANDARD 17)

include_directories(includes)

add_executable(kilo main.cpp)
