# octal-cpp
a collection of utility classes for c++

## how to link to your cmake project

```cmake
# set a variable to a external projects directory
set(EXT_DIR        "${CMAKE_HOME_DIRECTORY}/ext")
set(EXT_STAMP_DIR  "${EXT_DIR}/.stamp")
set(EXT_TMP_DIR    "${EXT_DIR}/.tmp")

# this will be the target for ExternalProject (NOT the target for the library)
set(OCTAL_NAME          "octal-git")
# root directory
set(OCTAL_ROOT          "${EXT_DIR}/${OCTAL_NAME}")

ExternalProject_Add(${OCTAL_NAME}
    PREFIX          "${OCTAL_ROOT}"
    TMP_DIR         "${EXT_TMP_DIR}/${OCTAL_NAME}"
    STAMP_DIR       "${EXT_STAMP_DIR}/${OCTAL_NAME}"
    # - Download Step ------------------
    GIT_REPOSITORY  "https://github.com/TheOctopod/octal-cpp.git"
    # - Update Step --------------------
    UPDATE_COMMAND  "" # no update step
    # - Configure Step -----------------
    SOURCE_DIR      "${OCTAL_ROOT}" # source folder is the root directory
    # - Build Step ---------------------
    BINARY_DIR      "${OCTAL_ROOT}/bin"
    # - Install Step ------------------
    INSTALL_COMMAND "" # no install step
    CMAKE_ARGS
    "-DCMAKE_BUILD_TYPE=Release"
)

add_library("octal" STATIC IMPORTED)
if(MSVC)
    # find the .lib
    set_target_properties("octal" PROPERTIES
        IMPORTED_LOCATION_DEBUG       "${OCTAL_ROOT}/lib/Debug/octal.lib"
        IMPORTED_LOCATION_RELEASE     "${OCTAL_ROOT}/lib/Release/octal.lib"
        INTERFACE_INCLUDE_DIRECTORIES "${OCTAL_ROOT}/src"
    )
else()
    # find the .a
    set_target_properties("octal" PROPERTIES
        IMPORTED_LOCATION             "${OCTAL_ROOT}/lib/liboctal.a"
        INTERFACE_INCLUDE_DIRECTORIES "${OCTAL_ROOT}/src"
    )
endif()

target_link_libraries(PROJECT "octal")
```
