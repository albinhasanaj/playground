cmake_minimum_required(VERSION 3.16)
project(basics_end_project LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(calculator
    src/main.cpp
    src/calculator.cpp
    src/parser.cpp
    src/analyzer.cpp
)

target_include_directories(calculator PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
