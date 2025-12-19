cmake_minimum_required(VERSION 3.16)
project(memory_day_04 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build as shared library for Python ctypes
add_library(memory_utils SHARED
    src/memory_utils.cpp
)

target_include_directories(memory_utils PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Also build test executable
add_executable(memory_test src/main.cpp)
target_link_libraries(memory_test PRIVATE memory_utils)
