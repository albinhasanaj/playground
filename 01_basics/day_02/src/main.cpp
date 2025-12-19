#include "loops.hpp"
#include <iostream>
#include <sstream>

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

void runTests() {
  std::cout << "\n=== Running Tests ===\n\n";

  // sumToN tests
  test("sumToN(1) == 1", sumToN(1) == 1);
  test("sumToN(5) == 15", sumToN(5) == 15);        // 1+2+3+4+5
  test("sumToN(10) == 55", sumToN(10) == 55);      // 1+2+...+10
  test("sumToN(100) == 5050", sumToN(100) == 5050);

  // factorial tests
  test("factorial(0) == 1", factorial(0) == 1);
  test("factorial(1) == 1", factorial(1) == 1);
  test("factorial(5) == 120", factorial(5) == 120);   // 5*4*3*2*1
  test("factorial(10) == 3628800", factorial(10) == 3628800);

  // isPrime tests
  test("isPrime(0) == false", isPrime(0) == false);
  test("isPrime(1) == false", isPrime(1) == false);
  test("isPrime(2) == true", isPrime(2) == true);
  test("isPrime(3) == true", isPrime(3) == true);
  test("isPrime(4) == false", isPrime(4) == false);
  test("isPrime(17) == true", isPrime(17) == true);
  test("isPrime(18) == false", isPrime(18) == false);
  test("isPrime(97) == true", isPrime(97) == true);
  
  // printFibonacci tests
  std::cout << "\n--- Fibonacci Tests ---\n";
  {
    std::stringstream buffer;
    std::streambuf* old = std::cout.rdbuf(buffer.rdbuf());
    printFibonacci(5);
    std::cout.rdbuf(old);
    std::string output = buffer.str();
    // Assuming space-separated output: "0 1 1 2 3 "
    test("printFibonacci(5) output", output == "0 1 1 2 3 " || output == "0 1 1 2 3\n" || output == "0 1 1 2 3");
    if (output.empty()) {
      std::cout << "  (Output was empty - did you implement it yet?)\n";
    } else {
      std::cout << "  Got: \"" << output << "\"\n";
    }
  }

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
  std::cout << "=== Loop Exercises - Day 02 ===\n";
  
  // Run automated tests
  runTests();

  // Run interactive menu
  runMenu();

  return testsFailed > 0 ? 1 : 0;
}
