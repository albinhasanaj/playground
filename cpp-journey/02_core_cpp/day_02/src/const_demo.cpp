#include "const_demo.hpp"
#include <iostream>

double circleArea(const double &radius) {
  // TODO: Return PI * radius * radius
  // NOTE: radius is const ref - we cannot modify it
  return 0.0;
}

double vectorSum(const std::vector<double> &vec) {
  // TODO: Sum all elements in vec
  // NOTE: vec is const - we can only read, not modify
  // HINT: Use const iterator or range-based for with const ref
  return 0.0;
}

double vectorMax(const std::vector<double> &vec) {
  // TODO: Find and return maximum element
  // NOTE: Cannot modify vec since it's const
  return 0.0;
}

void demonstrateConstPointers() {
  // TODO: Demonstrate const int* p
  //   - Can change what p points to
  //   - Cannot change *p (the value)

  // TODO: Demonstrate int* const p
  //   - Cannot change what p points to
  //   - Can change *p (the value)

  // TODO: Demonstrate const int* const p
  //   - Cannot change p OR *p

  // TODO: Print explanatory messages for each
}

constexpr long long constexprFactorial(int n) {
  // TODO: Implement factorial that can be computed at compile time
  // HINT: Use ternary operator for single expression
  // return n <= 1 ? 1 : n * constexprFactorial(n - 1);
  return 0;
}

void printConstants() {
  // TODO: Print PI, E, and PHI with labels
  // TODO: Show compile-time factorial: constexprFactorial(10)
}
