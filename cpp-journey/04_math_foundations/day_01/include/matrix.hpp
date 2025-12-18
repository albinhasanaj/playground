#pragma once
#include <stdexcept>
#include <vector>

/**
 * General MxN Matrix class
 */
class Matrix {
private:
  std::vector<double> m_data;
  size_t m_rows;
  size_t m_cols;

public:
  Matrix(size_t rows, size_t cols);
  Matrix(size_t rows, size_t cols, const std::vector<double> &data);

  // Accessors
  size_t rows() const;
  size_t cols() const;
  double at(size_t row, size_t col) const;
  double &at(size_t row, size_t col);

  // Operators
  Matrix operator+(const Matrix &other) const;
  Matrix operator-(const Matrix &other) const;
  Matrix operator*(const Matrix &other) const;
  Matrix operator*(double scalar) const;

  // Matrix operations
  Matrix transpose() const;
  double trace() const;       // Sum of diagonal (square matrices only)
  double determinant() const; // 2x2 and 3x3 only
  Matrix inverse() const;     // 2x2 only for now

  // Utilities
  bool isSquare() const;
  bool sameDimensions(const Matrix &other) const;
  void fill(double value);
  void print() const;

  // Factory methods
  static Matrix identity(size_t size);
  static Matrix zeros(size_t rows, size_t cols);
  static Matrix ones(size_t rows, size_t cols);
};
