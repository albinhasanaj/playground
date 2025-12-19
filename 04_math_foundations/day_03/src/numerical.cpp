#include "numerical.hpp"
#include <iostream>

bool almostEqual(double a, double b, double epsilon) {
  // TODO: Compare with relative and absolute tolerance
  return false;
}

double kahanSum(const std::vector<double> &values) {
  // TODO: Implement Kahan summation for numerical stability
  return 0;
}

double stableQuadratic(double a, double b, double c, double &x1, double &x2) {
  // TODO: Solve ax² + bx + c = 0 with numerical stability
  return 0;
}

void demonstrateCatastrophicCancellation() {
  // TODO: Show (a + b) - b ≠ a for certain values
}

void demonstratePrecisionLoss() {
  // TODO: Show accumulation of floating point errors
}
