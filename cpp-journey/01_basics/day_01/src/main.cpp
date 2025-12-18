#include "conditionals.hpp"
#include <iostream>

int main() {
  // TODO: Print a welcome message
  std::cout << "Welcome to the Number Analyzer!" << std::endl;
  // TODO: Prompt the user to enter an integer
  std::cout << "Enter an integer: ";
  int num;
  // TODO: Read the integer using std::cin
  std::cin >> num;
  // TODO: Call classifyNumber with the input
  classifyNumber(num);
  // TODO: Ask if the user wants to analyze another number
  std::cout << "Do you want to analyze another number? (y/n): ";
  char response;
  std::cin >> response;
  // TODO: Loop if they say yes
  if (response == 'y' || response == 'Y') {
    return main();
  }

  return 0;
}
