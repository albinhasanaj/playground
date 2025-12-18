#pragma once
#include <vector>

/**
 * @brief Computes prime factorization of n
 * @param n The number to factorize
 * @return Vector of prime factors (with repetition)
 */
std::vector<int> primeFactorization(int n);

/**
 * @brief Computes sum of proper divisors of n (excluding n itself)
 * @param n The number to analyze
 * @return Sum of divisors
 */
int sumOfDivisors(int n);

/**
 * @brief Checks if n is a perfect number
 * @param n The number to check
 * @return true if perfect (sum of divisors == n)
 */
bool isPerfect(int n);

/**
 * @brief Checks if n is an abundant number
 * @param n The number to check
 * @return true if abundant (sum of divisors > n)
 */
bool isAbundant(int n);

/**
 * @brief Checks if n is a deficient number
 * @param n The number to check
 * @return true if deficient (sum of divisors < n)
 */
bool isDeficient(int n);

/**
 * @brief Performs full analysis on a number
 * @param n The number to analyze
 */
void analyzeNumber(int n);

/**
 * @brief Analyzes a list of numbers and prints statistics
 * @param numbers The list of numbers
 */
void analyzeList(const std::vector<int> &numbers);
