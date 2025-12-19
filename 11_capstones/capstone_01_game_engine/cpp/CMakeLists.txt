cmake_minimum_required(VERSION 3.16)
project(game_engine LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

# Collect all source files that exist
file(GLOB ENGINE_SOURCES "src/*.cpp")

# Only build if there are source files
if(ENGINE_SOURCES)
    add_library(engine SHARED ${ENGINE_SOURCES})
    target_include_directories(engine PUBLIC include)
endif()
