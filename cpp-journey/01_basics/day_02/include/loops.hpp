#pragma once

/**
 * @brief Computes the sum of first n natural numbers
 * @param n Upper bound (inclusive)
 * @return Sum: 1 + 2 + ... + n
 */
long long sumToN(int n);

/**
 * @brief Computes n factorial (n!)
 * @param n The number to compute factorial of
 * @return n! = n × (n-1) × ... × 1
 */
long long factorial(int n);

/**
 * @brief Checks if a number is prime
 * @param n The number to check
 * @return true if n is prime, false otherwise
 */
bool isPrime(int n);

/**
 * @brief Prints the first n Fibonacci numbers
 * @param n How many Fibonacci numbers to print
 */
void printFibonacci(int n);

/**
 * @brief Displays the interactive menu and handles user input
 */
void runMenu();
