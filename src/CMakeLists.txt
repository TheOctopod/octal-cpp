
# include() macro
# stores all arguments in PROJ_INCLUDES variable
# ===============================================

macro(add_include)
	set(ALL_INCLUDES ${ALL_INCLUDES} ${ARGV})
endmacro(add_include)

# Octal.h Main Header
# ===============================================

add_include(
	"octal.h"
)
# Vector
# ===============================================

add_include(
	"octal/vector/vector.cpp"
	"octal/vector/vector.h"
)

# Install
# ===============================================

message(STATUS "List of included files: ${ALL_INCLUDES}")
add_library(${PROJECT_NAME} STATIC ${ALL_INCLUDES})

install(TARGETS octal DESTINATION ${CMAKE_ARCHIVE_OUTPUT_DIRECTORY})