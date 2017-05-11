cmake_minimum_required(VERSION 3.7)
project(tp1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Main.cpp Ordenador.h mergesort.cpp insercion.cpp)
add_executable(tp1 ${SOURCE_FILES})