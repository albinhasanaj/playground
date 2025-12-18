#pragma once
#include <chrono>
#include <functional>
#include <string>

struct BenchmarkResult {
  std::string name;
  double timeMs;
  size_t inputSize;
};

class Benchmark {
public:
  static BenchmarkResult run(const std::string &name, std::function<void()> fn,
                             int iterations = 1);
  static void warmup(std::function<void()> fn, int iterations = 3);
};

extern "C" {
double benchmark_sort(const char *algorithm, int *data, int size);
double benchmark_search(const char *algorithm, int *data, int size, int target);
}
