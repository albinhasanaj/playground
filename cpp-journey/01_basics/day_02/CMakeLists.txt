cmake_minimum_required(VERSION 3.16)
project(basics_day_02 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(loops
    src/main.cpp
    src/loops.cpp
)

target_include_directories(loops PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
