cmake_minimum_required(VERSION 3.1)
enable_testing()

project(test)

include_directories(${CMAKE_SOURCE_DIR})
add_definitions("/utf-8")
add_definitions("/Zc:__cplusplus") # define __cplusplus value correctly

add_executable(main main.cpp)
add_test(NAME main COMMAND main WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})
