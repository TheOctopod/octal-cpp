
cmake_minimum_required(VERSION 2.8.8)

# Project Name
# ===============================================

project(octal LANGUAGES CXX)

# Version 0.1
# ===============================================

set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)

set(ROOT		"${CMAKE_HOME_DIRECTORY}")

execute_process(
	COMMAND cmd /c git rev-parse --short HEAD
	OUTPUT_VARIABLE GIT_COMMIT
	OUTPUT_STRIP_TRAILING_WHITESPACE
)

if("${GIT_COMMIT}" STREQUAL "") 
	set(GIT_COMMIT "UNKNOWN") 
endif()

set(VERSION 	"${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}-${GIT_COMMIT}")

set(OUTPUT_DIR	"${ROOT}/lib")
set(SOURCE_DIR	"${ROOT}/src")
set(INCLUDE_DIR	"${ROOT}/include" CACHE INTERNAL "dir")

# for executables
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY  "${OUTPUT_DIR}")

# for static libraries
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY  "${OUTPUT_DIR}")

# for shared (dynamic) libraries
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY  "${OUTPUT_DIR}")

configure_file("${INCLUDE_DIR}/octal.h.in" "${INCLUDE_DIR}/octal.h")

#builds ${PROJECT_NAME} as library target
add_subdirectory("src")


# messages
# ===============================================

set(COLOR TRUE)

if(COLOR)
    string(ASCII 27 ESCAPE)
    set(C_3 "${ESCAPE}[33m") # yellow
    set(C_R "${ESCAPE}[0m")  # reset
endif()


message("===========================================")
message("  Building ${PROJECT_NAME} v${VERSION}")
message(" ----------------------------------------- ")
message("  CMAKE Generator  : ${CMAKE_GENERATOR}")
message("  System Name      : ${CMAKE_SYSTEM_NAME}")
message("  Root Directory   : ${ROOT}")
message("  Binary Directory : ${CMAKE_BINARY_DIR}")
message("  Source Directory : ${SOURCE_DIR}")

message("${C_3}===========================================${C_R}")
message("  Including Sources")
message("${C_3} ----------------------------------------- ${C_R}")

foreach(ARG ${PROJ_SOURCES})
    message("    - ${ARG}")
endforeach()

message("${C_3}===========================================${C_R}")
