#include "loops.hpp"
#include <iostream>

long long sumToN(int n) {
  // TODO: Use a for loop to sum numbers from 1 to n
  // HINT: Initialize sum = 0, then loop from 1 to n adding each i
  return 0;
}

long long factorial(int n) {
  // TODO: Use a for loop to compute n!
  // HINT: Initialize result = 1, multiply by each number from 2 to n
  // NOTE: Handle edge case n = 0 (0! = 1)
  return 0;
}

bool isPrime(int n) {
  // TODO: Return true if n is prime, false otherwise
  // HINT: A prime is only divisible by 1 and itself
  // HINT: Only need to check divisors up to sqrt(n)
  // NOTE: 0 and 1 are not prime
  return false;
}

void printFibonacci(int n) {
  // TODO: Print the first n Fibonacci numbers
  // HINT: F(0) = 0, F(1) = 1, F(n) = F(n-1) + F(n-2)
  // HINT: Use a while loop, track previous two values
}

void runMenu() {
  // TODO: Display menu with options:
  //   1. Sum to N
  //   2. Factorial
  //   3. Prime check
  //   4. Fibonacci
  //   5. Exit
  // TODO: Use a do-while loop to keep showing menu until exit
  // TODO: Read user choice and call appropriate function
}
