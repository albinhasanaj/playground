cmake_minimum_required(VERSION 3.16)
project(core_day_02 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(const_correctness
    src/main.cpp
    src/const_demo.cpp
)

target_include_directories(const_correctness PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
