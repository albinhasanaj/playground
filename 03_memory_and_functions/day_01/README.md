# Day 01: Stack vs Heap Memory

## Learning Objectives

- Understand stack memory allocation (automatic storage)
- Understand heap memory allocation (dynamic storage)
- Learn when to use each type
- Recognize memory layout and implications for performance

## C++ Concepts

- **Stack**: Automatic variables, fixed size, LIFO, fast
- **Heap**: Dynamic allocation with `new`/`delete`, slower, flexible size
- **Memory layout**: Stack grows down, heap grows up
- **Scope and lifetime**: Stack dies at end of scope, heap until deleted

## Math Concepts

- **Memory complexity**: O(1) stack vs O(n) heap allocations
- **Cache locality**: Contiguous stack memory is cache-friendly
- **Array sizing**: When size is known vs dynamic

## Your Task

Demonstrate stack vs heap behavior:
1. Stack-allocated array vs heap-allocated array
2. Measure allocation/deallocation timing
3. Show scope and lifetime differences
4. Demonstrate memory exhaustion risks

## Files to Implement

- `src/memory_demo.cpp` — implement demonstrations
- `src/main.cpp` — run and display results
