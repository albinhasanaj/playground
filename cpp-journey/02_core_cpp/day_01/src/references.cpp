#include "references.hpp"
#include <iostream>

void swap(int &a, int &b) {
  // TODO: Swap values of a and b using a temporary variable
  // NOTE: This modifies the original variables because we use references
}

void findMinMax(const int *arr, int size, int &outMin, int &outMax) {
  // TODO: Find the minimum and maximum values in arr
  // TODO: Store results in outMin and outMax
  // HINT: Initialize outMin/outMax to arr[0], then loop
}

void doubleElements(std::vector<int> &vec) {
  // TODO: Multiply each element in vec by 2
  // HINT: Use range-based for with reference: for (int& elem : vec)
}

void normalize(std::vector<double> &vec) {
  // TODO: Compute sum of all elements
  // TODO: Divide each element by the sum
  // NOTE: Handle the case where sum is zero
}

int incrementByValue(int x) {
  // TODO: Return x + 1
  // NOTE: Original variable is NOT modified
  return 0;
}

void incrementByReference(int &x) {
  // TODO: Increment x by 1
  // NOTE: Original variable IS modified
}

void demonstrateDifference() {
  // TODO: Create a variable, call incrementByValue, show it's unchanged
  // TODO: Call incrementByReference, show it IS changed
  // TODO: Print explanatory messages
}
