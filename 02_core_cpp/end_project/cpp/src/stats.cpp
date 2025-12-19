#include "stats.hpp"
#include <algorithm>
#include <cmath>
#include <stdexcept>

namespace stats {

double mean(const std::vector<double> &data) {
  // TODO: Compute arithmetic mean
  // FORMULA: sum(data) / size
  // HINT: Handle empty vector case
  return 0;
}

double variance(const std::vector<double> &data) {
  // TODO: Compute population variance
  // FORMULA: sum((xi - mean)²) / n
  return 0;
}

double stddev(const std::vector<double> &data) {
  // TODO: Return sqrt(variance)
  return 0;
}

double min(const std::vector<double> &data) {
  // TODO: Return minimum value
  // HINT: Handle empty vector case
  return 0;
}

double max(const std::vector<double> &data) {
  // TODO: Return maximum value
  return 0;
}

double median(std::vector<double> data) {
  // TODO: Sort and return middle value
  // HINT: For even size, average two middle values
  return 0;
}

double correlation(const std::vector<double> &x, const std::vector<double> &y) {
  // TODO: Compute Pearson correlation coefficient
  // FORMULA: cov(x,y) / (stddev(x) * stddev(y))
  // HINT: Vectors must have same size
  return 0;
}

double covariance(const std::vector<double> &x, const std::vector<double> &y) {
  // TODO: Compute covariance
  // FORMULA: sum((xi - mean_x)(yi - mean_y)) / n
  return 0;
}

} // namespace stats

// === C Exports ===

extern "C" {

double stats_mean(const double *data, int size) {
  // TODO: Compute mean from C array
  return 0;
}

double stats_variance(const double *data, int size) {
  // TODO: Compute variance from C array
  return 0;
}

double stats_stddev(const double *data, int size) {
  // TODO: Compute standard deviation from C array
  return 0;
}
}
