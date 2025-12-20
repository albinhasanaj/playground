#include "arrays.hpp"
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

// Simple test helper
int testsPassed = 0;
int testsFailed = 0;

void test(const char* name, bool condition) {
  if (condition) {
    std::cout << "[PASS] " << name << std::endl;
    testsPassed++;
  } else {
    std::cout << "[FAIL] " << name << std::endl;
    testsFailed++;
  }
}

bool near(double a, double b, double epsilon = 0.001) {
  return std::abs(a - b) < epsilon;
}

void runTests() {
  std::cout << "\n=== Running Statistics Tests ===\n\n";

  std::vector<double> data1 = {1.0, 2.0, 3.0, 4.0, 5.0};
  std::vector<double> data2 = {10.0, 20.0, 30.0};
  std::vector<double> data3 = {5.0, 15.0, 10.0, 20.0}; // For median test (even count)

  // Mean tests
  test("computeMean({1,2,3,4,5}) == 3.0", near(computeMean(data1), 3.0));
  test("computeMean({10,20,30}) == 20.0", near(computeMean(data2), 20.0));

  // Min/Max tests
  test("findMin({1,2,3,4,5}) == 1.0", near(findMin(data1), 1.0));
  test("findMax({1,2,3,4,5}) == 5.0", near(findMax(data1), 5.0));

  // Median tests
  test("computeMedian({1,2,3,4,5}) == 3.0", near(computeMedian(data1), 3.0));
  test("computeMedian({5,15,10,20}) == 12.5", near(computeMedian(data3), 12.5));

  // StdDev tests
  // For {1,2,3,4,5}: mean=3, squares of diffs: (1-3)^2=4, (2-3)^2=1, (3-3)^2=0, (4-3)^2=1, (5-3)^2=4
  // Sum = 10, Mean of squares = 10/5 = 2.0, sqrt(2.0) ≈ 1.414
  test("computeStdDev({1,2,3,4,5}) ≈ 1.414", near(computeStdDev(data1), 1.4142));

  // Summary
  std::cout << "\n=== Results ===\n";
  std::cout << "Passed: " << testsPassed << "/" << (testsPassed + testsFailed) << std::endl;
  
  if (testsFailed == 0) {
    std::cout << "\n*** ALL TESTS PASSED! ***\n";
  } else {
    std::cout << "\nFailed: " << testsFailed << " test(s)\n";
  }
}

int main() {
  std::cout << "=== Array/Vector Statistics - Day 03 ===\n";
  
  // Run automated tests instead of interactive UI
  runTests();

  return testsFailed > 0 ? 1 : 0;
}
