# Day 02: Const Correctness

## Learning Objectives

- Understand the `const` keyword and its various uses
- Learn to write const-correct interfaces
- Understand const pointers, const references, and constexpr
- Recognize the benefits of const for code safety

## C++ Concepts

- **const variables**: `const int x = 5;` — immutable after initialization
- **const references**: `const int& ref` — can't modify through this reference
- **const pointers**: `const int* p` vs `int* const p` — different meanings
- **const member functions**: `void foo() const;` — doesn't modify object
- **constexpr**: Compile-time constant evaluation

## Math Concepts

- **Immutable mathematical constants**: π, e, φ
- **Pure functions**: Functions that don't modify state
- **Mathematical invariants**: Values that shouldn't change

## Your Task

Implement const-correct interfaces:
1. Define mathematical constants using constexpr
2. Write const-correct getter functions
3. Demonstrate const pointer semantics
4. Show const propagation through function calls

## Files to Implement

- `src/const_demo.cpp` — implement demonstrations
- `src/main.cpp` — test all const scenarios
