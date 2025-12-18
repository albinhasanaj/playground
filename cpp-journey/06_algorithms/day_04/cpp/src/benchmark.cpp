#include "benchmark.hpp"
#include <iostream>

BenchmarkResult Benchmark::run(const std::string &name,
                               std::function<void()> fn, int iterations) {
  // TODO: Time the function execution
  // auto start = std::chrono::high_resolution_clock::now();
  // for (int i = 0; i < iterations; i++) fn();
  // auto end = std::chrono::high_resolution_clock::now();
  return {name, 0.0, 0};
}

void Benchmark::warmup(std::function<void()> fn, int iterations) {
  // TODO: Run warmup iterations
}

extern "C" {
double benchmark_sort(const char *algorithm, int *data, int size) { /* TODO */
  return 0;
}
double benchmark_search(const char *algorithm, int *data, int size,
                        int target) { /* TODO */
  return 0;
}
}
