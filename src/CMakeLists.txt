
# include() macro
# stores all arguments in ALL_INCLUDES variable
# ===============================================

macro(add_sources)
	foreach(ARG ${ARGN})
		message("    - ${ARG}")
	endforeach()
	set(SRCS ${SRCS} ${ARGV})
endmacro()

message("===========================================")
message("  Including Sources")
message(" ----------------------------------------- ")

# Octal.h Main Header
# ===============================================

add_sources(
	"octal.h"
)

# Vector
# ===============================================

add_sources(
	"octal/vector/vector.cpp"
	"octal/vector/vector.h"
)

# Build
# ===============================================

message("===========================================")

add_library(${PROJECT_NAME} STATIC ${SRCS})
