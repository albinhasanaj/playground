#include "resource.hpp"
#include <iostream>

int main() {
  std::cout << "=== RAII Demonstration ===" << std::endl;

  // TODO: Demonstrate FileHandle RAII
  // {
  //     FileHandle file("test.txt", "w");
  //     file.write("Hello", 5);
  // }  // File automatically closed here

  // TODO: Demonstrate Buffer RAII
  // {
  //     Buffer buf(1024);
  //     buf.fill('A');
  // }  // Memory automatically freed here

  // TODO: Call demonstrateUniquePtr
  // TODO: Call demonstrateSharedPtr
  // TODO: Call demonstrateWeakPtr
  // TODO: Call demonstrateExceptionSafety

  std::cout << "All resources cleaned up!" << std::endl;
  return 0;
}
