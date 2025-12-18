#pragma once
#include <string>

/**
 * @brief Represents a parsed expression
 */
struct Expression {
  double operand1;
  double operand2;
  char operation; // '+', '-', '*', '/', '^', '%'
  bool valid;
};

/**
 * @brief Parses a simple expression like "5 + 3"
 * @param input The input string
 * @return Parsed Expression struct
 */
Expression parseExpression(const std::string &input);

/**
 * @brief Evaluates a parsed expression
 * @param expr The expression to evaluate
 * @return The result of the calculation
 */
double evaluateExpression(const Expression &expr);

/**
 * @brief Validates if an expression string is well-formed
 * @param input The input string
 * @return true if valid, false otherwise
 */
bool isValidExpression(const std::string &input);
