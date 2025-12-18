#include "matrix.hpp"
#include "stats.hpp"
#include "vector.hpp"
#include <iostream>

int main() {
  std::cout << "=== MathCore Library Tests ===" << std::endl;

  // === Vector2 Tests ===
  // TODO: Create Vector2(3, 4), test magnitude (should be 5)
  // TODO: Test dot product, normalized, add, subtract, scale

  // === Vector3 Tests ===
  // TODO: Create Vector3(1, 0, 0) and Vector3(0, 1, 0)
  // TODO: Test cross product (should be (0, 0, 1))

  // === Matrix2x2 Tests ===
  // TODO: Create 2x2 matrix, test determinant
  // TODO: Test rotation matrix at 90 degrees
  // TODO: Test matrix multiplication
  // TODO: Test inverse

  // === Matrix3x3 Tests ===
  // TODO: Create translation matrix, test element access

  // === Statistics Tests ===
  // TODO: Create vector {1, 2, 3, 4, 5}
  // TODO: Test mean (should be 3)
  // TODO: Test variance, stddev
  // TODO: Test median
  // TODO: Test correlation with another vector

  std::cout << "All tests completed!" << std::endl;
  return 0;
}
