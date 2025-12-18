cmake_minimum_required(VERSION 3.16)
project(vector_engine LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build as shared library for Python
add_library(vecmath SHARED
    src/vec3.cpp
    src/mat4.cpp
    src/transform.cpp
)

target_include_directories(vecmath PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)

# Test executable
add_executable(vecmath_test src/main.cpp)
target_link_libraries(vecmath_test PRIVATE vecmath)
