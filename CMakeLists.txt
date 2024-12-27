cmake_minimum_required(VERSION 3.30)

project(CMakeTest VERSION 1.0 LANGUAGES C)
set(CMAKE_CXX_STANDARD 20)

#include(CTest)

set(HEADERS
        drivers/lib.h
)

set(SRCS
        main.c
        drivers/lib.c
)

add_executable(CMakeTest ${SRCS})

#add_subdirectory(drivers)
#add_subdirectory(tests)
