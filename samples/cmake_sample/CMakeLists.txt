cmake_minimum_required(VERSION 2.8)

project(cmake_sample)

set(SOURCES main.cpp)
include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(converter ${SOURCES})
