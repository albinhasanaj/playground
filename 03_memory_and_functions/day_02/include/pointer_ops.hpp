#pragma once
#include <cstddef>

/**
 * @brief Swaps two integers using pointers
 * @param a Pointer to first integer
 * @param b Pointer to second integer
 */
void swapWithPointers(int *a, int *b);

/**
 * @brief Finds an element in array, returns pointer to it
 * @param arr Pointer to array start
 * @param size Number of elements
 * @param value Value to find
 * @return Pointer to element, or nullptr if not found
 */
int *findElement(int *arr, size_t size, int value);

/**
 * @brief Reverses array in place using pointer arithmetic
 * @param arr Pointer to array start
 * @param size Number of elements
 */
void reverseArray(int *arr, size_t size);

/**
 * @brief Computes sum of array using pointer traversal
 * @param begin Pointer to first element
 * @param end Pointer past last element
 * @return Sum of elements
 */
int sumWithPointers(const int *begin, const int *end);

/**
 * @brief Copies array from source to destination
 * @param src Source array
 * @param dst Destination array (must be large enough)
 * @param size Number of elements to copy
 */
void copyArray(const int *src, int *dst, size_t size);

/**
 * @brief Demonstrates pointer to pointer (double pointer)
 * Modifies what a pointer points to
 */
void demonstrateDoublePointer(int **ptr);

/**
 * @brief Prints array using pointer notation
 * @param arr Pointer to array
 * @param size Number of elements
 */
void printArrayWithPointers(const int *arr, size_t size);
