# Day 03: Enums and Structs

## Learning Objectives

- Understand classic enums vs enum class (scoped enums)
- Learn to define and use structs
- Combine structs with enums for rich data modeling
- Understand struct initialization methods

## C++ Concepts

- **enum**: `enum Color { Red, Green, Blue };` — classic, unscoped
- **enum class**: `enum class Color { Red, Green, Blue };` — scoped, type-safe
- **struct**: Aggregate data type with public members by default
- **Designated initializers** (C++20): `Point{.x = 1, .y = 2}`
- **Aggregate initialization**: `Point{1, 2}`

## Math Concepts

- **Geometric shapes**: Points, vectors, rectangles
- **Color representation**: RGB values
- **Coordinate systems**: 2D and 3D points

## Your Task

Model geometric shapes and colors:
1. Define enum class for shape types
2. Define enum class for colors with RGB
3. Create Point2D and Point3D structs
4. Create Rectangle and Circle structs
5. Functions to compute properties based on shape type

## Files to Implement

- `src/shapes.cpp` — implement shape-related functions
- `src/colors.cpp` — implement color-related functions
- `src/main.cpp` — demonstrate all types
