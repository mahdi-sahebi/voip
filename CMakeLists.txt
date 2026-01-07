# Information
cmake_minimum_required(VERSION 3.1 FATAL_ERROR)
project(roncal LANGUAGES CXX VERSION 1.0.0)


# Configuration
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -g0")
set(CMAKE_C_FLAGS_RELEASE   "-O2 -g0")
set(CMAKE_CXX_FLAGS_DEBUG   "-O0 -g3")
set(CMAKE_C_FLAGS_DEBUG     "-O0 -g3")


# Sub-Directory
add_subdirectory(deps)
add_subdirectory(src)
add_subdirectory(test)

