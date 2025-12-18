cmake_minimum_required(VERSION 3.16)
project(core_end_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build as shared library for Node.js bindings
add_library(mathcore SHARED
    src/vector.cpp
    src/matrix.cpp
    src/stats.cpp
)

target_include_directories(mathcore PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Also build a standalone test executable
add_executable(mathcore_test
    src/main.cpp
)

target_link_libraries(mathcore_test PRIVATE mathcore)
