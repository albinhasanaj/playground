cmake_minimum_required(VERSION 3.16)
project(math_day_01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(matrices
    src/main.cpp
    src/matrix.cpp
)

target_include_directories(matrices PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
