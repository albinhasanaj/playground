cmake_minimum_required(VERSION 3.16)
project(memory_day_02 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(pointers
    src/main.cpp
    src/pointer_ops.cpp
)

target_include_directories(pointers PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
