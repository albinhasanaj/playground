#pragma once
#include <vector>

// Mathematical constants using constexpr
constexpr double PI = 3.14159265358979323846;
constexpr double E = 2.71828182845904523536;
constexpr double PHI = 1.61803398874989484820; // Golden ratio

/**
 * @brief Computes circle area (const-correct: doesn't modify radius)
 * @param radius The radius (const reference)
 * @return Area of circle
 */
double circleArea(const double &radius);

/**
 * @brief Computes sum of vector (const-correct: doesn't modify vector)
 * @param vec The input vector (const reference)
 * @return Sum of elements
 */
double vectorSum(const std::vector<double> &vec);

/**
 * @brief Finds maximum in vector (const-correct)
 * @param vec The input vector
 * @return The maximum value
 */
double vectorMax(const std::vector<double> &vec);

/**
 * @brief Demonstrates const pointer semantics
 * Shows difference between:
 *   const int* p    — pointer to const int
 *   int* const p    — const pointer to int
 *   const int* const p — const pointer to const int
 */
void demonstrateConstPointers();

/**
 * @brief Computes factorial at compile time
 */
constexpr long long constexprFactorial(int n);

/**
 * @brief Prints the mathematical constants
 */
void printConstants();
