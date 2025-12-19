#include "arrays.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>

double computeMean(const std::vector<double> &data) {
  // TODO: Compute and return the arithmetic mean
  // HINT: Sum all elements, divide by size
  // NOTE: Handle empty vector case
  return 0.0;
}

double findMin(const std::vector<double> &data) {
  // TODO: Find and return the minimum value
  // HINT: Use a loop or std::min_element
  return 0.0;
}

double findMax(const std::vector<double> &data) {
  // TODO: Find and return the maximum value
  // HINT: Use a loop or std::max_element
  return 0.0;
}

double computeStdDev(const std::vector<double> &data) {
  // TODO: Compute population standard deviation
  // FORMULA: sqrt(Σ(xi - mean)² / n)
  // HINT: First compute mean, then sum of squared differences
  return 0.0;
}

double computeMedian(std::vector<double> data) {
  // TODO: Sort the data and return the middle value
  // HINT: Use std::sort(data.begin(), data.end())
  // NOTE: For even count, return average of two middle values
  return 0.0;
}

std::vector<double> readNumbers() {
  // TODO: Read numbers from std::cin until user enters -1 (sentinel)
  // TODO: Return vector of all entered numbers (excluding sentinel)
  return {};
}

void printStatistics(const std::vector<double> &data) {
  // TODO: Print count, mean, min, max, std dev, and median
  // TODO: Handle empty data case with appropriate message
}
