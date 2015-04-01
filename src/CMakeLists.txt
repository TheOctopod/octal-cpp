
# include() macro
# stores all arguments in ALL_INCLUDES variable
# ===============================================

set(PROJ_SOURCES "" CACHE INTERNAL "lists")

macro(add_sources)
	set(PROJ_SOURCES ${PROJ_SOURCES} ${ARGV} CACHE INTERNAL "lists")
endmacro()

set(PROJ_LINKS "" CACHE INTERNAL "lists")

macro(add_libs)
	set(PROJ_SOURCES ${PROJ_SOURCES} ${ARGV} CACHE INTERNAL "lists")
	foreach(ARG ${ARGN})
		add_dependencies(${PROJECT_NAME} ${ARG})
		target_link_libraries(${PROJECT_NAME} ${ARG})
	endforeach()
endmacro()

# Vector
# ===============================================

add_sources(
	"octal/vector.cpp"
)

# Build
# ===============================================

add_library(${PROJECT_NAME} STATIC ${PROJ_SOURCES})

target_include_directories(${PROJECT_NAME}
	PRIVATE ${INCLUDE_DIR}
)
