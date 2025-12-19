#include "conditionals.hpp"
#include <iostream>

int getSign(int n) {
  // TODO: Return 1 if n is positive, -1 if negative, 0 if zero
  if (n > 0) {
    return 1;
  } else if (n < 0) {
    return -1;
  } else {
    return 0;
  }
  // HINT: Use if/else if/else chain
}

bool isEven(int n) {
  // TODO: Return true if n is even, false if odd
  // HINT: Use the modulo operator %
  return n % 2 == 0;
}

bool isInRange(int n, int lower, int upper) {
  // TODO: Return true if lower <= n <= upper
  // HINT: Use logical AND (&&) to combine conditions
  return n >= lower && n <= upper;
}

void classifyNumber(int n) {
  // TODO: Print whether the number is positive/negative/zero
  if (n > 0) {
    std::cout << "The number is positive." << std::endl;
  } else if (n < 0) {
    std::cout << "The number is negative." << std::endl;
  } else {
    std::cout << "The number is zero." << std::endl;
  }
  // TODO: Print whether the number is even or odd
  if (isEven(n)) {
    std::cout << "The number is even." << std::endl;
  } else {
    std::cout << "The number is odd." << std::endl;
  }
  // TODO: Print whether the number is in the range [1, 100]
  if (isInRange(n, 1, 100)) {
    std::cout << "The number is in the range [1, 100]." << std::endl;
  } else {
    std::cout << "The number is not in the range [1, 100]." << std::endl;
  }
  // HINT: Use std::cout << "message" << std::endl;
}
