#include "matrix.hpp"
#include <iostream>

Matrix::Matrix(size_t rows, size_t cols)
    : m_rows(rows), m_cols(cols), m_data(rows * cols, 0.0) {}

Matrix::Matrix(size_t rows, size_t cols, const std::vector<double> &data)
    : m_rows(rows), m_cols(cols), m_data(data) {
  // TODO: Validate data.size() == rows * cols
}

size_t Matrix::rows() const { return m_rows; }
size_t Matrix::cols() const { return m_cols; }

double Matrix::at(size_t row, size_t col) const {
  // TODO: Return element at (row, col)
  // Index = row * cols + col
  return 0;
}

double &Matrix::at(size_t row, size_t col) {
  // TODO: Return mutable reference
  static double dummy = 0;
  return dummy;
}

Matrix Matrix::operator+(const Matrix &other) const {
  // TODO: Check same dimensions
  // TODO: Return element-wise sum
  return Matrix(m_rows, m_cols);
}

Matrix Matrix::operator-(const Matrix &other) const {
  // TODO: Element-wise subtraction
  return Matrix(m_rows, m_cols);
}

Matrix Matrix::operator*(const Matrix &other) const {
  // TODO: Matrix multiplication
  // Check: this->cols == other.rows
  // Result: (this->rows × other.cols)
  // c[i][j] = sum(a[i][k] * b[k][j])
  return Matrix(m_rows, other.m_cols);
}

Matrix Matrix::operator*(double scalar) const {
  // TODO: Scalar multiplication
  return Matrix(m_rows, m_cols);
}

Matrix Matrix::transpose() const {
  // TODO: Swap rows and cols
  // result[j][i] = this[i][j]
  return Matrix(m_cols, m_rows);
}

double Matrix::trace() const {
  // TODO: Sum of diagonal elements
  // Only valid for square matrices
  return 0;
}

double Matrix::determinant() const {
  // TODO: Compute determinant
  // 2x2: ad - bc
  // 3x3: Use cofactor expansion
  return 0;
}

Matrix Matrix::inverse() const {
  // TODO: Compute inverse (2x2 for now)
  // 2x2: (1/det) * [[d, -b], [-c, a]]
  return Matrix(m_rows, m_cols);
}

bool Matrix::isSquare() const { return m_rows == m_cols; }
bool Matrix::sameDimensions(const Matrix &other) const {
  return m_rows == other.m_rows && m_cols == other.m_cols;
}

void Matrix::fill(double value) {
  // TODO: Fill all elements with value
}

void Matrix::print() const {
  // TODO: Print matrix in readable format
}

Matrix Matrix::identity(size_t size) {
  // TODO: Create identity matrix
  return Matrix(size, size);
}

Matrix Matrix::zeros(size_t rows, size_t cols) { return Matrix(rows, cols); }

Matrix Matrix::ones(size_t rows, size_t cols) {
  Matrix m(rows, cols);
  m.fill(1.0);
  return m;
}
