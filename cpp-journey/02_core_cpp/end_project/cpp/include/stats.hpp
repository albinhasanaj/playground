#pragma once
#include <vector>

/**
 * Statistical functions for data analysis
 */
namespace stats {

/**
 * @brief Computes arithmetic mean
 */
double mean(const std::vector<double> &data);

/**
 * @brief Computes population variance
 */
double variance(const std::vector<double> &data);

/**
 * @brief Computes population standard deviation
 */
double stddev(const std::vector<double> &data);

/**
 * @brief Computes minimum value
 */
double min(const std::vector<double> &data);

/**
 * @brief Computes maximum value
 */
double max(const std::vector<double> &data);

/**
 * @brief Computes median (middle value)
 */
double median(std::vector<double> data);

/**
 * @brief Computes Pearson correlation coefficient between two datasets
 */
double correlation(const std::vector<double> &x, const std::vector<double> &y);

/**
 * @brief Computes covariance between two datasets
 */
double covariance(const std::vector<double> &x, const std::vector<double> &y);

} // namespace stats

// C-style exports for FFI
extern "C" {
double stats_mean(const double *data, int size);
double stats_variance(const double *data, int size);
double stats_stddev(const double *data, int size);
}
