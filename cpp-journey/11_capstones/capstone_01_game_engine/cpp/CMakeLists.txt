cmake_minimum_required(VERSION 3.16)
project(game_engine LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)
add_library(engine SHARED
    src/engine.cpp
    src/renderer.cpp
    src/scene.cpp
    src/entity.cpp
)
target_include_directories(engine PUBLIC include)
