#include "pointer_ops.hpp"
#include <iostream>

void swapWithPointers(int *a, int *b) {
  // TODO: Swap values using pointers
  // int temp = *a;
  // *a = *b;
  // *b = temp;
}

int *findElement(int *arr, size_t size, int value) {
  // TODO: Search using pointer arithmetic
  // for (int* ptr = arr; ptr < arr + size; ptr++) {
  //     if (*ptr == value) return ptr;
  // }
  // return nullptr;
  return nullptr;
}

void reverseArray(int *arr, size_t size) {
  // TODO: Reverse using two pointers
  // int* left = arr;
  // int* right = arr + size - 1;
  // while (left < right) { swap(*left, *right); left++; right--; }
}

int sumWithPointers(const int *begin, const int *end) {
  // TODO: Sum using pointer traversal
  // int sum = 0;
  // for (const int* p = begin; p != end; p++) sum += *p;
  // return sum;
  return 0;
}

void copyArray(const int *src, int *dst, size_t size) {
  // TODO: Copy elements using pointers
  // for (size_t i = 0; i < size; i++) *(dst + i) = *(src + i);
}

void demonstrateDoublePointer(int **ptr) {
  // TODO: Allocate new memory and point to it
  // *ptr = new int(42);
}

void printArrayWithPointers(const int *arr, size_t size) {
  // TODO: Print using pointer notation
  // for (const int* p = arr; p < arr + size; p++)
  //     std::cout << *p << " ";
}
