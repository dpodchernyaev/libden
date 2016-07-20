cmake_minimum_required(VERSION 2.8)

project(snake_sample)

set(SOURCES main.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(snake ${SOURCES})
