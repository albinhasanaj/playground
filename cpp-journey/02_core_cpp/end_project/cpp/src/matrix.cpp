#include "matrix.hpp"
#include <cmath>
#include <stdexcept>

// === Matrix2x2 Implementation ===

Matrix2x2::Matrix2x2() : m_data{1, 0, 0, 1} {} // Identity

Matrix2x2::Matrix2x2(double m00, double m01, double m10, double m11)
    : m_data{m00, m01, m10, m11} {}

double Matrix2x2::at(int row, int col) const {
  // TODO: Return element at (row, col)
  // HINT: index = row * 2 + col
  return 0;
}

void Matrix2x2::set(int row, int col, double value) {
  // TODO: Set element at (row, col)
}

double Matrix2x2::determinant() const {
  // TODO: Return ad - bc for matrix [[a,b],[c,d]]
  // FORMULA: m[0]*m[3] - m[1]*m[2]
  return 0;
}

Matrix2x2 Matrix2x2::transpose() const {
  // TODO: Swap m01 and m10
  return Matrix2x2();
}

Matrix2x2 Matrix2x2::inverse() const {
  // TODO: Compute inverse matrix
  // FORMULA: (1/det) * [[d, -b], [-c, a]]
  // HINT: Throw std::runtime_error if determinant is zero
  return Matrix2x2();
}

Matrix2x2 Matrix2x2::multiply(const Matrix2x2 &other) const {
  // TODO: Matrix multiplication
  // c[i][j] = sum(a[i][k] * b[k][j])
  return Matrix2x2();
}

Matrix2x2 Matrix2x2::identity() { return Matrix2x2(1, 0, 0, 1); }

Matrix2x2 Matrix2x2::rotation(double angleRadians) {
  // TODO: Return rotation matrix
  // [[cos, -sin], [sin, cos]]
  return Matrix2x2();
}

Matrix2x2 Matrix2x2::scale(double sx, double sy) {
  // TODO: Return scale matrix
  // [[sx, 0], [0, sy]]
  return Matrix2x2();
}

// === Matrix3x3 Implementation ===

Matrix3x3::Matrix3x3() : m_data{1, 0, 0, 0, 1, 0, 0, 0, 1} {} // Identity

double Matrix3x3::at(int row, int col) const {
  // TODO: Return element at (row, col)
  // index = row * 3 + col
  return 0;
}

void Matrix3x3::set(int row, int col, double value) {
  // TODO: Set element at (row, col)
}

double Matrix3x3::determinant() const {
  // TODO: Compute 3x3 determinant using rule of Sarrus or cofactor expansion
  return 0;
}

Matrix3x3 Matrix3x3::transpose() const {
  // TODO: Transpose the matrix
  return Matrix3x3();
}

Matrix3x3 Matrix3x3::multiply(const Matrix3x3 &other) const {
  // TODO: 3x3 matrix multiplication
  return Matrix3x3();
}

Matrix3x3 Matrix3x3::identity() { return Matrix3x3(); }

Matrix3x3 Matrix3x3::translation(double tx, double ty) {
  // TODO: Return translation matrix (homogeneous coordinates)
  // [[1, 0, tx], [0, 1, ty], [0, 0, 1]]
  return Matrix3x3();
}

Matrix3x3 Matrix3x3::rotation(double angleRadians) {
  // TODO: Return rotation matrix (homogeneous coordinates)
  return Matrix3x3();
}

Matrix3x3 Matrix3x3::scale(double sx, double sy) {
  // TODO: Return scale matrix (homogeneous coordinates)
  return Matrix3x3();
}

// === C Exports ===

extern "C" {

double matrix2x2_determinant(double m00, double m01, double m10, double m11) {
  // TODO: Return m00*m11 - m01*m10
  return 0;
}

void matrix2x2_multiply(const double *a, const double *b, double *result) {
  // TODO: Multiply two 2x2 matrices
  // result[0] = a[0]*b[0] + a[1]*b[2]
  // etc.
}
}
