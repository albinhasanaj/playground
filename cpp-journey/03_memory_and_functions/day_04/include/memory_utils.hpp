#pragma once
#include <cstddef>
#include <cstdint>

// All functions use extern "C" to avoid name mangling
// This makes them callable from Python ctypes

extern "C" {

/**
 * @brief Allocates array of doubles
 * @param size Number of elements
 * @return Pointer to allocated array (caller must free with free_array)
 */
double *allocate_array(size_t size);

/**
 * @brief Frees array allocated by allocate_array
 */
void free_array(double *arr);

/**
 * @brief Computes sum of array
 */
double array_sum(const double *arr, size_t size);

/**
 * @brief Computes mean of array
 */
double array_mean(const double *arr, size_t size);

/**
 * @brief Finds minimum value
 */
double array_min(const double *arr, size_t size);

/**
 * @brief Finds maximum value
 */
double array_max(const double *arr, size_t size);

/**
 * @brief Sorts array in place
 */
void array_sort(double *arr, size_t size);

/**
 * @brief Scales array by factor in place
 */
void array_scale(double *arr, size_t size, double factor);

/**
 * @brief Adds two arrays element-wise, stores in result
 */
void array_add(const double *a, const double *b, double *result, size_t size);

/**
 * @brief Computes dot product of two arrays
 */
double array_dot(const double *a, const double *b, size_t size);

/**
 * @brief Returns library version
 */
const char *get_version();
}
