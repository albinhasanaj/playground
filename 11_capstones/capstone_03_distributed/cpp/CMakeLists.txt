cmake_minimum_required(VERSION 3.16)
project(distributed_node LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 17)

# Collect all source files that exist
file(GLOB NODE_SOURCES "src/*.cpp")

# Only build if there are source files
if(NODE_SOURCES)
    add_library(node_lib SHARED ${NODE_SOURCES})
    target_include_directories(node_lib PUBLIC include)
endif()
