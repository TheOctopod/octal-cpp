
#main directory
set(OCT_HOME octal)

set(OCT_VECTOR ${OCT_HOME}/vector/vector.cpp ${OCT_HOME}/vector/vector.h)

add_library(octal ${OCT_HOME}/octal.h ${OCT_VECTOR})

install(TARGETS octal DESTINATION ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})