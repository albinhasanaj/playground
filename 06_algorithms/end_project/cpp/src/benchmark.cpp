#include "algorithms.hpp"
#include <chrono>
#include <cstring>

extern "C" {
double bench_sort(const char *algo, int *data, int n) {
  std::vector<int> vec(data, data + n);
  auto start = std::chrono::high_resolution_clock::now();

  // TODO: Call appropriate sort based on algo string
  // if (strcmp(algo, "quick") == 0) algorithms::quickSort(vec);

  auto end = std::chrono::high_resolution_clock::now();
  return std::chrono::duration<double, std::milli>(end - start).count();
}

double bench_search(const char *algo, int *data, int n, int target) {
  std::vector<int> vec(data, data + n);
  auto start = std::chrono::high_resolution_clock::now();

  // TODO: Call appropriate search

  auto end = std::chrono::high_resolution_clock::now();
  return std::chrono::duration<double, std::milli>(end - start).count();
}
}
