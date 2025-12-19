cmake_minimum_required(VERSION 3.16)

# Helper macro to conditionally add subdirectories
macro(add_subdirectory_if_exists dir)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${dir}/CMakeLists.txt")
        add_subdirectory(${dir})
    endif()
endmacro()

add_subdirectory_if_exists(capstone_01_game_engine/cpp)
add_subdirectory_if_exists(capstone_02_compiler/cpp)
add_subdirectory_if_exists(capstone_03_distributed/cpp)
