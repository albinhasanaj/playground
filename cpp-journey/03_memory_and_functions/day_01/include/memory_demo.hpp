#pragma once
#include <cstddef>

/**
 * @brief Demonstrates stack allocation with fixed array
 * @param size Number of elements (must be compile-time constant for stack)
 */
void demonstrateStackAllocation();

/**
 * @brief Demonstrates heap allocation with new/delete
 * @param size Number of elements to allocate
 */
void demonstrateHeapAllocation(size_t size);

/**
 * @brief Shows lifetime difference: stack dies at scope end
 * @return Pointer that becomes dangling (DO NOT USE - demonstration only)
 */
int *demonstrateScopeLifetime();

/**
 * @brief Measures and compares allocation speeds
 * @param iterations Number of alloc/dealloc cycles
 * @param arraySize Size of array to allocate each time
 */
void benchmarkAllocation(int iterations, size_t arraySize);

/**
 * @brief Shows memory growth patterns
 * Prints addresses to visualize stack/heap layout
 */
void visualizeMemoryLayout();

/**
 * @brief Demonstrates memory leak if delete is forgotten
 * (Intentionally leaks for demonstration)
 */
void demonstrateMemoryLeak();

/**
 * @brief Shows proper cleanup pattern
 */
void demonstrateProperCleanup();
