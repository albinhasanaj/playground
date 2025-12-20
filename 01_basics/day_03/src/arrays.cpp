#include "arrays.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>

double computeMean(const std::vector<double> &data) {
  if (data.empty()) return 0.0;
  // TODO: Compute and return the arithmetic mean
  // HINT: Sum all elements, divide by size
  // NOTE: Handle empty vector case
  float sum = 0;
  for (float num: data) {
    sum+=num;
  }
  return sum/data.size();
}

double findMin(const std::vector<double> &data) {
  // TODO: Find and return the minimum value
  // HINT: Use a loop or std::min_element
  int lowest = data[0];
  for (int i = 1; i<data.size(); i++) {
    if (lowest > data[i]) {
      lowest = data[i];
    } 
  }
  return lowest;
}

double findMax(const std::vector<double> &data) {
  // TODO: Find and return the maximum value
  // HINT: Use a loop or std::max_element
    int highest = data[0];
  for (int i = 1; i<data.size(); i++) {
    if (highest < data[i]) {
      highest = data[i];
    } 
  }
  return highest;
}

double computeStdDev(const std::vector<double> &data) {
  // TODO: Compute population standard deviation
  // FORMULA: sqrt(Σ(xi - mean)² / n)
  // HINT: First compute mean, then sum of squared differences
  double mean = computeMean(data);
  // loop through (xi - mean)^2
  double sum = 0.0;
  for (double d: data) {
    sum = sum + (d - mean) * (d - mean); 
  }
  
  // std::cout << "OUTPUT:" << sum/data.size() << std::endl;
  return sqrt(sum/data.size());
}

double computeMedian(std::vector<double> data) {
  if (data.empty()) return 0.0;
  // TODO: Sort the data and return the middle value
  // HINT: Use std::sort(data.begin(), data.end())
  // NOTE: For even count, return average of two middle values
  std::sort(data.begin(), data.end());

  if (data.size() % 2 == 0) {
    // even , aka sum
    return (data[data.size()/2]+data[data.size()/2-1])/2;
  } else {
    return data[data.size()/2];
  }
}

std::vector<double> readNumbers() {
  // TODO: Read numbers from std::cin until user enters -1 (sentinel)
  // TODO: Return vector of all entered numbers (excluding sentinel)
    std::vector<double> data;
  double x;

  while (true) {
    std::cin >> x;
    if (!std::cin) break;     
    if (x == -1) break;        
    data.push_back(x);
  }

  return data;
}

void printStatistics(const std::vector<double> &data) {
  // TODO: Print count, mean, min, max, std dev, and median
  // TODO: Handle empty data case with appropriate message
  if (data.empty()) {
    std::cout << "No data entered.\n";
    return;
  }

  std::cout << "Count: " << data.size() << "\n";
  std::cout << "Mean: " << computeMean(data) << "\n";
  std::cout << "Min: " << findMin(data) << "\n";
  std::cout << "Max: " << findMax(data) << "\n";
  std::cout << "Std Dev: " << computeStdDev(data) << "\n";
  std::cout << "Median: " << computeMedian(data) << "\n";
}
