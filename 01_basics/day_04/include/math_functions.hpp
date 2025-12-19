#pragma once

/**
 * @brief Computes x raised to the power n (iterative)
 * @param x Base value
 * @param n Exponent (non-negative)
 * @return x^n
 */
long long powerIterative(int x, int n);

/**
 * @brief Computes x raised to the power n (recursive)
 * @param x Base value
 * @param n Exponent (non-negative)
 * @return x^n
 */
long long powerRecursive(int x, int n);

/**
 * @brief Computes GCD of two numbers using Euclidean algorithm
 * @param a First number
 * @param b Second number
 * @return Greatest Common Divisor of a and b
 */
int gcd(int a, int b);

/**
 * @brief Computes LCM of two numbers
 * @param a First number
 * @param b Second number
 * @return Least Common Multiple of a and b
 */
int lcm(int a, int b);

/**
 * @brief Computes binomial coefficient C(n, k)
 * @param n Total items
 * @param k Items to choose
 * @return n! / (k! × (n-k)!)
 */
long long binomial(int n, int k);

/**
 * @brief Computes absolute value (overloaded for int and double)
 */
int absValue(int x);
double absValue(double x);
