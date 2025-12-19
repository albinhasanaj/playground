cmake_minimum_required(VERSION 3.16)
project(memory_day_01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(stack_heap
    src/main.cpp
    src/memory_demo.cpp
)

target_include_directories(stack_heap PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
