#pragma once
#include <vector>

/**
 * @brief Computes the arithmetic mean of a vector
 * @param data The input values
 * @return The mean (sum / count)
 */
double computeMean(const std::vector<double> &data);

/**
 * @brief Finds the minimum value in a vector
 * @param data The input values
 * @return The minimum value
 */
double findMin(const std::vector<double> &data);

/**
 * @brief Finds the maximum value in a vector
 * @param data The input values
 * @return The maximum value
 */
double findMax(const std::vector<double> &data);

/**
 * @brief Computes the standard deviation
 * @param data The input values
 * @return The population standard deviation
 */
double computeStdDev(const std::vector<double> &data);

/**
 * @brief Computes the median (middle value when sorted)
 * @param data The input values (will be sorted internally)
 * @return The median value
 */
double computeMedian(std::vector<double> data);

/**
 * @brief Reads numbers from user until sentinel value
 * @return Vector containing all entered numbers
 */
std::vector<double> readNumbers();

/**
 * @brief Prints all statistics for the given data
 * @param data The input values
 */
void printStatistics(const std::vector<double> &data);
