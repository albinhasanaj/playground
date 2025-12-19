# Day 03: Arrays and std::vector

## Learning Objectives

- Understand C-style arrays and their limitations
- Master `std::vector` as the go-to dynamic array
- Learn array/vector iteration techniques
- Practice common array algorithms

## C++ Concepts

- **C-style arrays**: `int arr[10];` — fixed size, no bounds checking
- **std::vector**: `std::vector<int> vec;` — dynamic size, safe access
- **Vector methods**: `push_back()`, `size()`, `at()`, `[]`, `clear()`
- **Range-based for**: `for (auto& elem : vec) { ... }`
- **Iterators**: `vec.begin()`, `vec.end()`

## Math Concepts

- **Statistics**: mean, median, mode, standard deviation
- **Array operations**: sum, min, max, search
- **Sorting basics**: understanding order

## Your Task

Implement a statistics calculator:
1. Read a list of numbers into a vector
2. Compute mean (average)
3. Find minimum and maximum
4. Compute standard deviation
5. Sort and find median

## Files to Implement

- `src/arrays.cpp` — implement statistical functions
- `src/main.cpp` — implement input handling and display
