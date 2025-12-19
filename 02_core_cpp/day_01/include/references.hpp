#pragma once
#include <vector>

/**
 * @brief Swaps two integers using references
 * @param a First value (will become b)
 * @param b Second value (will become a)
 */
void swap(int &a, int &b);

/**
 * @brief Finds min and max in array, returns via references
 * @param arr The input array
 * @param size Size of the array
 * @param outMin Output: minimum value found
 * @param outMax Output: maximum value found
 */
void findMinMax(const int *arr, int size, int &outMin, int &outMax);

/**
 * @brief Doubles each element in the vector (in-place modification)
 * @param vec The vector to modify
 */
void doubleElements(std::vector<int> &vec);

/**
 * @brief Normalizes a vector to sum to 1.0 (in-place)
 * @param vec The vector to normalize
 */
void normalize(std::vector<double> &vec);

/**
 * @brief Increments a value (by-value version, for comparison)
 * @param x The value to increment (copy)
 * @return The incremented value
 */
int incrementByValue(int x);

/**
 * @brief Increments a value (by-reference version)
 * @param x The value to increment (reference)
 */
void incrementByReference(int &x);

/**
 * @brief Demonstrates difference between by-value and by-reference
 */
void demonstrateDifference();
