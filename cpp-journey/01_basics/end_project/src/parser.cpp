#include "parser.hpp"
#include "calculator.hpp"
#include <cctype>
#include <sstream>

Expression parseExpression(const std::string &input) {
  Expression expr;
  expr.valid = false;

  // TODO: Parse input string in format "operand1 operator operand2"
  // TODO: Extract operand1 (double)
  // TODO: Extract operation (char: +, -, *, /, ^, %)
  // TODO: Extract operand2 (double)
  // TODO: Set expr.valid = true if parsing succeeded
  // HINT: Use std::istringstream for parsing

  return expr;
}

double evaluateExpression(const Expression &expr) {
  // TODO: Based on expr.operation, call appropriate calculator function
  // TODO: Handle invalid expressions
  // SWITCH on expr.operation:
  //   '+' -> add(expr.operand1, expr.operand2)
  //   '-' -> subtract(...)
  //   '*' -> multiply(...)
  //   '/' -> divide(...)
  //   '^' -> power(...)
  //   '%' -> modulo(...)
  return 0.0;
}

bool isValidExpression(const std::string &input) {
  // TODO: Check if input contains at least one operator
  // TODO: Check if operands appear to be numbers
  // HINT: Look for presence of +, -, *, /, ^, %
  return false;
}
