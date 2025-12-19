cmake_minimum_required(VERSION 3.16)
project(compiler LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

# Collect all source files that exist
file(GLOB COMPILER_SOURCES "src/*.cpp")

# Only build if there are source files
if(COMPILER_SOURCES)
    add_library(compiler_lib SHARED ${COMPILER_SOURCES})
    target_include_directories(compiler_lib PUBLIC include)
endif()
