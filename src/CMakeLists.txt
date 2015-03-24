
#main directory
set(OCT_HOME octal)

set(OCT_VECTOR ${OCT_HOME}/vector/vector.cpp)

add_library(octal ${OCT_VECTOR})

install(TARGETS octal DESTINATION ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})