cmake_minimum_required(VERSION 3.16)
project(basics_day_03 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(arrays
    src/main.cpp
    src/arrays.cpp
)

target_include_directories(arrays PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
