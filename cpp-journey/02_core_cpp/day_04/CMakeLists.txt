cmake_minimum_required(VERSION 3.16)
project(core_day_04 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(classes
    src/main.cpp
    src/vector2d.cpp
    src/counter.cpp
)

target_include_directories(classes PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
