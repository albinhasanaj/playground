#include "analyzer.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>

std::vector<int> primeFactorization(int n) {
  std::vector<int> factors;

  // TODO: Find all prime factors of n
  // ALGORITHM:
  //   While n is divisible by 2, add 2 to factors, divide n by 2
  //   For odd factors from 3 to sqrt(n), same process
  //   If n > 1 at end, n itself is prime factor

  return factors;
}

int sumOfDivisors(int n) {
  // TODO: Compute sum of all proper divisors of n (excluding n)
  // HINT: Check all numbers from 1 to n/2
  return 0;
}

bool isPerfect(int n) {
  // TODO: Return true if sumOfDivisors(n) == n
  // Example: 6 is perfect (1 + 2 + 3 = 6)
  return false;
}

bool isAbundant(int n) {
  // TODO: Return true if sumOfDivisors(n) > n
  // Example: 12 is abundant (1+2+3+4+6 = 16 > 12)
  return false;
}

bool isDeficient(int n) {
  // TODO: Return true if sumOfDivisors(n) < n
  // Example: 8 is deficient (1+2+4 = 7 < 8)
  return false;
}

void analyzeNumber(int n) {
  // TODO: Print comprehensive analysis of n:
  //   - Prime factorization
  //   - Sum of divisors
  //   - Classification: perfect, abundant, or deficient
  //   - Whether it's prime
}

void analyzeList(const std::vector<int> &numbers) {
  // TODO: Compute and print statistics on the list:
  //   - Count of perfect, abundant, deficient numbers
  //   - Count of primes
  //   - Sum, min, max of the list
}
