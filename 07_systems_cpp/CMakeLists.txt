cmake_minimum_required(VERSION 3.16)

# Helper macro to conditionally add subdirectories
macro(add_subdirectory_if_exists dir)
    if(EXISTS "${CMAKE_CURRENT_SOURCE_DIR}/${dir}/CMakeLists.txt")
        add_subdirectory(${dir})
    endif()
endmacro()

add_subdirectory_if_exists(day_01)
add_subdirectory_if_exists(day_02)
add_subdirectory_if_exists(day_03)
add_subdirectory_if_exists(day_04)
add_subdirectory_if_exists(end_project/cpp)
