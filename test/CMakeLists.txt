# Options
option(BUILD_TESTS "To build the tests" ON)


# Variables
set(TEST test_${PROJECT_NAME})
set(SOURCES test.cpp)
set(HEADERS "")


# Find Packages


# Sub Directories


# Executables
add_executable(${TEST} ${SOURCES} ${HEADERS})


# Include Directories


# Libraries


