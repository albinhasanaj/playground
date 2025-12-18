# Day 05: Headers and Compilation Units

## Learning Objectives

- Understand the separation of declaration (.hpp) and definition (.cpp)
- Learn about header guards (`#pragma once` or `#ifndef`)
- Understand the compilation process: preprocessing → compilation → linking
- Practice organizing code across multiple files
- Understand the One Definition Rule (ODR)

## C++ Concepts

- **Header files**: Contain declarations, included via `#include`
- **Source files**: Contain definitions/implementations
- **Header guards**: Prevent multiple inclusion
- **Forward declarations**: Declare without defining
- **Linking**: Combining object files into executable

## Math Concepts

- **Geometry**: Circle, rectangle, triangle calculations
- **Physics**: Distance, velocity, kinetic energy formulas
- **Unit conversion**: Degrees ↔ radians

## Your Task

Build a multi-file math/physics utility:
1. `geometry.hpp/cpp` — area and perimeter calculations
2. `physics.hpp/cpp` — kinematic equations
3. `utils.hpp/cpp` — shared utilities like deg→rad conversion
4. `main.cpp` — uses all modules together

## Files to Implement

- `src/geometry.cpp` — implement geometry functions
- `src/physics.cpp` — implement physics functions
- `src/utils.cpp` — implement utility functions
- `src/main.cpp` — integrate and test all modules
