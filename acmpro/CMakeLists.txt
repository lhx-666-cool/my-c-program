cmake_minimum_required(VERSION 3.23)
project(acmpro)

set(CMAKE_CXX_STANDARD 14)

add_executable(acmpro main.cpp)

add_executable(shuweidp acm/shuweidp.cpp acm/1945.cpp acm/aishishaifa.cpp)
add_executable(1945 acm/1945.cpp)
add_executable(aishishaifa acm/aishishaifa.cpp)