#pragma once

/**
 * @brief Adds two numbers
 */
double add(double a, double b);

/**
 * @brief Subtracts b from a
 */
double subtract(double a, double b);

/**
 * @brief Multiplies two numbers
 */
double multiply(double a, double b);

/**
 * @brief Divides a by b
 * @throws std::invalid_argument if b is zero
 */
double divide(double a, double b);

/**
 * @brief Computes a raised to power b
 */
double power(double a, int b);

/**
 * @brief Computes a modulo b (for integers)
 */
int modulo(int a, int b);

/**
 * @brief Stores a calculation in history
 * @param expression The expression string (e.g., "5 + 3 = 8")
 */
void addToHistory(const char *expression);

/**
 * @brief Prints all calculations in history
 */
void printHistory();

/**
 * @brief Clears the calculation history
 */
void clearHistory();
