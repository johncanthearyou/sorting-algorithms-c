cmake_minimum_required(VERSION 3.10)
project(sorting_algorithms_c C)

# Set C standard
set(CMAKE_C_STANDARD 99)
set(CMAKE_C_STANDARD_REQUIRED ON)

# Add source files
file(GLOB ARRAY_SOURCES "array/*.c")
file(GLOB_RECURSE SORT_SOURCES "sort/*/*.c")
set(SOURCES
    main.c
    ${ARRAY_SOURCES}
    ${SORT_SOURCES}
)

# Add include directories
include_directories(
    ${CMAKE_CURRENT_SOURCE_DIR}
)

# Create executable
add_executable(sorting_algorithms ${SOURCES})
