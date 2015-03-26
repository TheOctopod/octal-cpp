
cmake_minimum_required(VERSION 2.8.5)

# Project Name
# ===============================================

set(PROJECT_NAME "octal")
project(${PROJECT_NAME} LANGUAGES CXX)

# Version 0.1
# ===============================================

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY "${CMAKE_HOME_DIRECTORY}")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY "${CMAKE_HOME_DIRECTORY}")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_HOME_DIRECTORY}/bin")

message(STATUS "CMAKE_GENERATOR : ${CMAKE_GENERATOR}")
message(STATUS "SYSTEM_NAME     : ${CMAKE_SYSTEM_NAME}")

add_subdirectory("src")