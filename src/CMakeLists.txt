
if(NOT OCTAL_MAINED)
	message(FATAL_ERROR "
		This is the wrong CMakeLists.txt file. 
		Try again with the topmost CMakeLists.txt.")
endif()

#main directory
set(OCT_HOME octal)

set(OCT_VECTOR ${OCT_HOME}/vector/vector.cpp)

add_library(octal ${OCT_VECTOR})