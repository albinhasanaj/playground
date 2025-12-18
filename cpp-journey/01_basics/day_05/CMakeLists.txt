cmake_minimum_required(VERSION 3.16)
project(basics_day_05 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(headers_demo
    src/main.cpp
    src/geometry.cpp
    src/physics.cpp
    src/utils.cpp
)

target_include_directories(headers_demo PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
