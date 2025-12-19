# Day 01: References vs Values

## Learning Objectives

- Understand pass-by-value vs pass-by-reference
- Learn when to use references instead of copies
- Understand reference semantics and aliasing
- Avoid common pitfalls with references

## C++ Concepts

- **Pass-by-value**: Function receives a copy of the argument
- **Pass-by-reference**: `void foo(int& x)` — function can modify original
- **const reference**: `void foo(const int& x)` — read-only, no copy
- **Reference initialization**: References must be initialized and cannot be reseated
- **Lifetime considerations**: References must not outlive the referenced object

## Math Concepts

- **Swap algorithm**: Exchange two values
- **In-place modification**: Modify without creating copies
- **Efficient passing**: Avoiding copies of large structures

## Your Task

Implement functions demonstrating reference semantics:
1. Swap function using references
2. Compute min/max and return both via references
3. Modify vector elements in place
4. Compare performance: by-value vs by-reference

## Files to Implement

- `src/references.cpp` — implement reference-using functions
- `src/main.cpp` — demonstrate and test each function
