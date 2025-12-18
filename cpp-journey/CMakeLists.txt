cmake_minimum_required(VERSION 3.16)
project(CppJourney LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# Add all level subdirectories
add_subdirectory(01_basics)
add_subdirectory(02_core_cpp)
add_subdirectory(03_memory_and_functions)
add_subdirectory(04_math_foundations)
add_subdirectory(05_data_structures)
add_subdirectory(06_algorithms)
add_subdirectory(07_systems_cpp)
add_subdirectory(08_databases_cpp)
add_subdirectory(09_performance)
add_subdirectory(10_advanced_math)
add_subdirectory(11_capstones)
