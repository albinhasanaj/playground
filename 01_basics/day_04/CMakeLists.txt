cmake_minimum_required(VERSION 3.16)
project(basics_day_04 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(functions
    src/main.cpp
    src/math_functions.cpp
)

target_include_directories(functions PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
