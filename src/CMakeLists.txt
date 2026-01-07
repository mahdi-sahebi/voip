# Options


# Variables
set(LIB ${PROJECT_NAME})
set(INCLUDE_DIR ${PROJECT_SOURCE_DIR}/include)
set(HEADERS ${INCLUDE_DIR}/${PROJECT_NAME}/base.hpp)
set(HEADERS ${INCLUDE_DIR}/${PROJECT_NAME}/roncal.hpp)
set(SOURCES roncal.cpp)


# Find Packages


# Sub Directories


# Executables
add_library(${LIB} STATIC ${SOURCES} ${HEADERS})


# Include Directories
target_include_directories(${LIB}
    PUBLIC ${INCLUDE_DIR}
)


# Libraries


