
# Basic CMake configuration
cmake_minimum_required(VERSION 3.22.0)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

project(log_forwarder_demo)

add_library(level0 STATIC level0/level0.cpp)

add_library(level1 STATIC level1/level1.cpp)
target_link_libraries(level1 PRIVATE level0)

add_executable(level2 level2/level2.cpp)
target_link_libraries(level2 PRIVATE level1)
