#include "loops.hpp"
#include <iostream>
#include <cmath>

long long sumToN(int n) {
  // TODO: Use a for loop to sum numbers from 1 to n
  int sum=0;
  for (int i=1;i<=n;i++) {
    sum+=i;
  }
  // HINT: Initialize sum = 0, then loop from 1 to n adding each i
  return sum;
}

long long factorial(int n) {
  // TODO: Use a for loop to compute n!
  if (n==0) return 1;
  
  int result=1;
  for (int i = 1; i <= n; i++ ) {
    result = result * i;
  }
  // HINT: Initialize result = 1, multiply by each number from 2 to n
  // NOTE: Handle edge case n = 0 (0! = 1)
  return result;
}

bool isPrime(int n) {
  // TODO: Return true if n is prime, false otherwise
  if (n < 2) return false;
  // HINT: A prime is only divisible by 1 and itself
  // HINT: Only need to check divisors up to sqrt(n)
  // NOTE: 0 and 1 are not prime
  for (int i = 2; i <= sqrt(n); i++) {
    if (n % i == 0) return false;
  }
  return true;
}

void printFibonacci(int n) {
  if (n <= 0) return;

  long long prev = 0;
  long long curr = 1;
  int count = 0;

  // TODO: Print the first n Fibonacci numbers
  // HINT: F(0) = 0, F(1) = 1, F(n) = F(n-1) + F(n-2)
  // HINT: Use a while loop, track previous two values
  while (count < n) {
    std::cout << prev << " ";
    long long next = prev + curr;
    prev = curr;
    curr = next;
    count++;
  }
}

void runMenu() {
  int choice;
  int n;

  do {
    std::cout << "\n--- Loop Exercises Menu ---\n";
    std::cout << "1. Sum to N\n";
    std::cout << "2. Factorial\n";
    std::cout << "3. Prime check\n";
    std::cout << "4. Fibonacci\n";
    std::cout << "5. Exit\n";
    std::cout << "Enter your choice (1-5): ";
    
    if (!(std::cin >> choice)) {
      std::cin.clear();
      std::cin.ignore(10000, '\n');
      std::cout << "Invalid input. Please enter a number.\n";
      continue;
    }

    if (choice >= 1 && choice <= 4) {
      std::cout << "Enter n: ";
      std::cin >> n;
    }

    switch (choice) {
      case 1:
        std::cout << "Sum to " << n << " = " << sumToN(n) << std::endl;
        break;
      case 2:
        std::cout << "Factorial of " << n << " = " << factorial(n) << std::endl;
        break;
      case 3:
        std::cout << "Is " << n << " prime? " << (isPrime(n) ? "Yes" : "No") << std::endl;
        break;
      case 4:
        printFibonacci(n);
        break;
      case 5:
        std::cout << "Goodbye!\n";
        break;
      default:
        std::cout << "Invalid choice. Please try again.\n";
    }
  } while (choice != 5);
}

