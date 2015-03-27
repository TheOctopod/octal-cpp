
cmake_minimum_required(VERSION 2.8.8)

# Project Name
# ===============================================

project(octal LANGUAGES CXX)

# Version 0.1
# ===============================================

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)

set(CMAKE_INSTALL_PREFIX            "${CMAKE_HOME_DIRECTORY}/install")
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  "${CMAKE_HOME_DIRECTORY}/install")
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY  "${CMAKE_HOME_DIRECTORY}/install")
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  "${CMAKE_HOME_DIRECTORY}/install")

message("===========================================")
message("  Pre-build Information")
message(" ----------------------------------------- ")
message("  CMAKE Generator  : ${CMAKE_GENERATOR}")
message("  System Name      : ${CMAKE_SYSTEM_NAME}")
message("  Binary Directory : ${CMAKE_BINARY_DIR}")
message("  Source Directory : ${CMAKE_SOURCE_DIR}")
message("  Install Directory: ${CMAKE_INSTALL_PREFIX}")

add_subdirectory("src")