cmake_minimum_required(VERSION 2.8.8)
set(PROJECT_NAME_STR my-gtest)
project(${PROJECT_NAME_STR} C CXX)

find_package(Threads REQUIRED)
enable_testing()

if(CMAKE_COMPILER_IS_GNUCXX)
    add_definitions(-Wall -ansi -Wno-deprecated -pthread)
endif()

add_subdirectory(gtest)
add_subdirectory(src)

