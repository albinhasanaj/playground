#pragma once

/**
 * @brief Determines if a number is positive, negative, or zero
 * @param n The number to analyze
 * @return 1 if positive, -1 if negative, 0 if zero
 */
int getSign(int n);

/**
 * @brief Checks if a number is even
 * @param n The number to check
 * @return true if even, false if odd
 */
bool isEven(int n);

/**
 * @brief Checks if a number is within a range (inclusive)
 * @param n The number to check
 * @param lower The lower bound
 * @param upper The upper bound
 * @return true if n is in [lower, upper], false otherwise
 */
bool isInRange(int n, int lower, int upper);

/**
 * @brief Classifies a number and prints all its properties
 * @param n The number to classify
 */
void classifyNumber(int n);
