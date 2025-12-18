cmake_minimum_required(VERSION 3.16)
project(core_day_03 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(enums_structs
    src/main.cpp
    src/shapes.cpp
    src/colors.cpp
)

target_include_directories(enums_structs PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
