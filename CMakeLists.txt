cmake_minimum_required(VERSION 3.7)
project(tp1)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES Main.cpp Ordenador.h mergesort.cpp insercion.cpp heapsort.cpp)
add_executable(tp1 ${SOURCE_FILES})

# Add -O0 to remove optimizations when using gcc
IF (CMAKE_COMPILER_IS_GNUCC)
    set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -O0")
    set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -O0")
ENDIF (CMAKE_COMPILER_IS_GNUCC)