#include "memory_demo.hpp"
#include <chrono>
#include <iostream>

void demonstrateStackAllocation() {
  // TODO: Declare a fixed-size array on the stack
  // Example: int stackArray[1000];

  // TODO: Print the address to show it's on the stack

  // TODO: Show that size must be compile-time constant
  // (Can't do: int n = 1000; int arr[n]; in standard C++)
}

void demonstrateHeapAllocation(size_t size) {
  // TODO: Allocate array on heap using new
  // int* heapArray = new int[size];

  // TODO: Print the address to show it's on the heap

  // TODO: Initialize values

  // TODO: Delete when done: delete[] heapArray;
}

int *demonstrateScopeLifetime() {
  // TODO: Show that returning pointer to stack variable is dangerous
  // This function creates a local variable and returns its address
  // The returned pointer becomes dangling!

  // int localVar = 42;
  // return &localVar;  // BAD! localVar dies at end of scope

  // NOTE: The compiler may warn about this
  return nullptr;
}

void benchmarkAllocation(int iterations, size_t arraySize) {
  // TODO: Time stack allocation (using alloca or fixed array in loop)

  // TODO: Time heap allocation using new/delete
  // auto start = std::chrono::high_resolution_clock::now();
  // ... allocations ...
  // auto end = std::chrono::high_resolution_clock::now();

  // TODO: Print comparison results
}

void visualizeMemoryLayout() {
  // TODO: Declare stack variables and print addresses
  // int stackVar1, stackVar2, stackVar3;
  // std::cout << "Stack addresses (should decrease):" << std::endl;
  // std::cout << &stackVar1 << ", " << &stackVar2 << ", " << &stackVar3 <<
  // std::endl;

  // TODO: Allocate heap variables and print addresses
  // int* heapVar1 = new int; int* heapVar2 = new int;
  // std::cout << "Heap addresses (should increase):" << std::endl;

  // TODO: Clean up heap allocations
}

void demonstrateMemoryLeak() {
  // TODO: Allocate memory but "forget" to delete
  // This is intentionally bad code for demonstration

  // for (int i = 0; i < 1000; i++) {
  //     int* leak = new int[1000];
  //     // Oops! No delete[]
  // }
}

void demonstrateProperCleanup() {
  // TODO: Show proper allocation and deallocation pattern
  // int* data = new int[100];
  // ... use data ...
  // delete[] data;
  // data = nullptr;  // Good practice: null after delete
}
