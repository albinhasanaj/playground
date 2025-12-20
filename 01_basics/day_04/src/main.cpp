#include "math_functions.hpp"
#include <iostream>

// Simple test helper to track results
int testsPassed = 0;
int testsFailed = 0;

void test(const char *name, bool condition) {
  if (condition) {
    std::cout << "[PASS] " << name << std::endl;
    testsPassed++;
  } else {
    std::cout << "[FAIL] " << name << std::endl;
    testsFailed++;
  }
}

void runTests() {
  std::cout << "\n=== Running Math Function Tests ===\n\n";

  // Power Iterative Tests
  test("powerIterative(2, 0) == 1", powerIterative(2, 0) == 1);
  test("powerIterative(2, 10) == 1024", powerIterative(2, 10) == 1024);
  test("powerIterative(5, 3) == 125", powerIterative(5, 3) == 125);

  // Power Recursive Tests
  test("powerRecursive(2, 0) == 1", powerRecursive(2, 0) == 1);
  test("powerRecursive(2, 10) == 1024", powerRecursive(2, 10) == 1024);
  test("powerRecursive(3, 4) == 81", powerRecursive(3, 4) == 81);

  // GCD Tests
  test("gcd(48, 18) == 6", gcd(48, 18) == 6);
  test("gcd(101, 103) == 1", gcd(101, 103) == 1); // Prime numbers
  test("gcd(0, 5) == 5", gcd(0, 5) == 5);

  // LCM Tests
  test("lcm(4, 6) == 12", lcm(4, 6) == 12);
  test("lcm(21, 6) == 42", lcm(21, 6) == 42);

  // Binomial Tests
  test("binomial(5, 2) == 10", binomial(5, 2) == 10);
  test("binomial(10, 5) == 252", binomial(10, 5) == 252);
  test("binomial(5, 0) == 1", binomial(5, 0) == 1);
  test("binomial(5, 5) == 1", binomial(5, 5) == 1);

  // Absolute Value Overloads
  test("absValue(-5) == 5", absValue(-5) == 5);
  test("absValue(10) == 10", absValue(10) == 10);
  test("absValue(-3.14) == 3.14",
       (absValue(-3.14) > 3.13 && absValue(-3.14) < 3.15));

  // Summary
  std::cout << "\n=== Results ===\n";
  std::cout << "Passed: " << testsPassed << "/" << (testsPassed + testsFailed)
            << std::endl;

  if (testsFailed == 0) {
    std::cout << "\n*** ALL TESTS PASSED! ***\n";
  } else {
    std::cout << "\nFailed: " << testsFailed << " test(s)\n";
    std::cout << "Keep implementing the functions in math_functions.cpp!\n";
  }
}

int main() {
  std::cout << "=== Day 04: Functions & Overloading ===\n";

  runTests();

  return testsFailed > 0 ? 1 : 0;
}
