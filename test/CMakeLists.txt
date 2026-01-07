# Options
option(BUILD_TESTS "To build the tests" ON)
if (NOT BUILD_TESTS)
    return()
endif()


# Find Packages
find_package(GTest REQUIRED)


# Variables
set(TEST test_${PROJECT_NAME})
set(SOURCES test.cpp)
set(HEADERS "")


# Sub Directories


# Executables
add_executable(${TEST} ${SOURCES} ${HEADERS})


# Include Directories
target_include_directories(${TEST} 
    PRIVATE
    ${PROJECT_SOURCE_DIR}/include/
)


# Libraries
target_link_libraries(${TEST}
    PRIVATE
    GTest::gtest
)


