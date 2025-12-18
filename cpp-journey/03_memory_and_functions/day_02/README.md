# Day 02: Pointers

## Learning Objectives

- Understand pointers as memory addresses
- Master pointer arithmetic
- Work with arrays through pointers
- Understand pointer-to-pointer concepts

## C++ Concepts

- **Pointer declaration**: `int* ptr;`
- **Address-of operator**: `&variable`
- **Dereference operator**: `*ptr`
- **Pointer arithmetic**: `ptr + 1`, `ptr++`
- **Arrays and pointers**: Array name decays to pointer
- **nullptr**: Safe null pointer (C++11)

## Math Concepts

- **Memory addressing**: Linear address space
- **Array indexing**: ptr[i] == *(ptr + i)
- **Stride**: Pointer arithmetic accounts for element size

## Your Task

Implement pointer operations:
1. Basic pointer operations (declare, assign, dereference)
2. Pointer arithmetic with arrays
3. Swap function using pointers
4. Find element in array using pointers
5. Reverse array in-place using pointers

## Files to Implement

- `src/pointer_ops.cpp` — implement pointer functions
- `src/main.cpp` — test all operations
