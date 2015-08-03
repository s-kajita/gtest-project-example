cmake_minimum_required(VERSION 2.8.8)
set(PROJECT_NAME_STR my-gtest)
project(${PROJECT_NAME_STR} C CXX)

include(CTest)
enable_testing()

if(${BUILD_GOOGLE_TEST} MATCHES "ON")
  find_package(Threads REQUIRED)
  add_definitions(-Wall -ansi -Wno-deprecated -pthread)
  add_subdirectory(gtest)
endif()

add_subdirectory(src)
add_subdirectory(sample)
add_subdirectory(sample_str)
