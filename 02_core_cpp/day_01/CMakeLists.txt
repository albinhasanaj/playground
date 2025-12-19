cmake_minimum_required(VERSION 3.16)
project(core_day_01 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(references
    src/main.cpp
    src/references.cpp
)

target_include_directories(references PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/include)
