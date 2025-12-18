#include "memory_utils.hpp"
#include <algorithm>
#include <numeric>

extern "C" {

double *allocate_array(size_t size) {
  // TODO: Allocate array using new
  // return new double[size];
  return nullptr;
}

void free_array(double *arr) {
  // TODO: Free array using delete[]
  // delete[] arr;
}

double array_sum(const double *arr, size_t size) {
  // TODO: Compute sum of all elements
  return 0.0;
}

double array_mean(const double *arr, size_t size) {
  // TODO: Return array_sum(arr, size) / size
  // Handle size == 0 case
  return 0.0;
}

double array_min(const double *arr, size_t size) {
  // TODO: Find minimum element
  // HINT: Use std::min_element
  return 0.0;
}

double array_max(const double *arr, size_t size) {
  // TODO: Find maximum element
  return 0.0;
}

void array_sort(double *arr, size_t size) {
  // TODO: Sort array in ascending order
  // std::sort(arr, arr + size);
}

void array_scale(double *arr, size_t size, double factor) {
  // TODO: Multiply each element by factor
}

void array_add(const double *a, const double *b, double *result, size_t size) {
  // TODO: result[i] = a[i] + b[i]
}

double array_dot(const double *a, const double *b, size_t size) {
  // TODO: Compute dot product: sum(a[i] * b[i])
  return 0.0;
}

const char *get_version() { return "1.0.0"; }
}
