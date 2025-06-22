cmake_minimum_required(VERSION 3.31)

##########################################

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

##########################################

project(chip8cpp)

##########################################

include(cmake/utils.cmake)

##########################################

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/$<CONFIGURATION>")

##########################################

add_subdirectory(deps)
add_subdirectory(src)
