#include "math_functions.hpp"

long long powerIterative(int x, int n) {
  // TODO: Compute x^n using a for loop
  // HINT: Start with result = 1, multiply by x, n times
  long long result = 1;

  for (int i = 0; i < n; i++) {
    result *= x;
  }

  return result;
}

long long powerRecursive(int x, int n) {
  // TODO: Compute x^n recursively
  // BASE CASE: n == 0 returns 1
  // RECURSIVE CASE: x * power(x, n-1)
  if (n == 0) {
    return 1;
  }

  return x * powerRecursive(x, n - 1);
}

int gcd(int a, int b) {
  // TODO: Implement Euclidean algorithm
  // ALGORITHM: gcd(a, b) = gcd(b, a % b) until b = 0
  // HINT: Can be done iteratively or recursively
}

int lcm(int a, int b) {
  // TODO: Compute LCM using the formula: lcm(a,b) = |a*b| / gcd(a,b)
  // HINT: Call your gcd function
  return 0;
}

long long binomial(int n, int k) {
  // TODO: Compute C(n, k) = n! / (k! × (n-k)!)
  // HINT: Use multiplicative formula to avoid overflow:
  //       C(n,k) = (n × (n-1) × ... × (n-k+1)) / (k × (k-1) × ... × 1)
  // NOTE: Handle edge cases k = 0 and k > n
  return 0;
}

int absValue(int x) {
  // TODO: Return absolute value of x
  // HINT: if x < 0, return -x
  return 0;
}

double absValue(double x) {
  // TODO: Return absolute value of x (double version)
  // NOTE: This demonstrates function overloading
  return 0.0;
}
