
cmake_minimum_required(VERSION 2.8.8)

# Project Name
# ===============================================

project(octal LANGUAGES CXX)

# Version 0.1
# ===============================================

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)

set(CMAKE_BUILD_DIRECTORY           "${CMAKE_HOME_DIRECTORY}/bin")

set(LIB_DIR                         "${CMAKE_HOME_DIRECTORY}/lib")

# for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  "${LIB_DIR}")

# for static libraries
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  "${LIB_DIR}")

# for shared (dynamic) libraries
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY  "${LIB_DIR}")

message("===========================================")
message("  Pre-build Information")
message(" ----------------------------------------- ")
message("  CMAKE Generator  : ${CMAKE_GENERATOR}")
message("  System Name      : ${CMAKE_SYSTEM_NAME}")
message("  Binary Directory : ${CMAKE_BINARY_DIR}")
message("  Source Directory : ${CMAKE_SOURCE_DIR}")
message("  Install Directory: ${CMAKE_INSTALL_PREFIX}")

#builds ${PROJECT_NAME} as library target
add_subdirectory("src")
