#include "calculator.hpp"
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

// Global history storage
static std::vector<std::string> history;

double add(double a, double b) {
  // TODO: Return the sum a + b
  return 0.0;
}

double subtract(double a, double b) {
  // TODO: Return the difference a - b
  return 0.0;
}

double multiply(double a, double b) {
  // TODO: Return the product a * b
  return 0.0;
}

double divide(double a, double b) {
  // TODO: Check if b is zero, throw std::invalid_argument if so
  // TODO: Return the quotient a / b
  return 0.0;
}

double power(double a, int b) {
  // TODO: Compute a^b
  // HINT: Handle negative exponents if desired
  return 0.0;
}

int modulo(int a, int b) {
  // TODO: Return a % b
  // TODO: Handle b == 0 case
  return 0;
}

void addToHistory(const char *expression) {
  // TODO: Add expression string to history vector
}

void printHistory() {
  // TODO: Print all entries in history
  // TODO: Handle empty history case
}

void clearHistory() {
  // TODO: Clear the history vector
}
