cmake_minimum_required(VERSION 3.1)
enable_testing()

project(test)

include(ExternalProject)
ExternalProject_Add(toml
    SOURCE_DIR ${CMAKE_SOURCE_DIR}/toml11
    GIT_REPOSITORY https://github.com/ToruNiina/toml11.git
    CONFIGURE_COMMAND ""
    BUILD_COMMAND ""
    INSTALL_COMMAND "")

include_directories(${CMAKE_SOURCE_DIR})
add_definitions("/utf-8")
add_executable(main main.cpp)
add_test(NAME main COMMAND main WORKING_DIRECTORY ${CMAKE_SOURCE_DIR})
