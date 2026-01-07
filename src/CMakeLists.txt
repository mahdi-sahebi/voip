# Options


# Variables
set(LIB ${PROJECT_NAME})
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include/${PROJECT_NAME})
set(HEADERS ${INCLUDE_DIR}/base.hpp)
set(HEADERS ${INCLUDE_DIR}/roncal.hpp)
set(SOURCES roncal.cpp)


# Find Packages


# Sub Directories


# Executables
add_library(${LIB} STATIC ${SOURCES} ${HEADERS})


# Include Directories


# Libraries


