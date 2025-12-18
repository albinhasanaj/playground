#pragma once
#include <array>

/**
 * 2x2 Matrix for 2D transformations
 */
class Matrix2x2 {
private:
  std::array<double, 4> m_data; // Row-major: [0,1] = row 0, [2,3] = row 1

public:
  Matrix2x2(); // Identity matrix
  Matrix2x2(double m00, double m01, double m10, double m11);

  // Element access
  double at(int row, int col) const;
  void set(int row, int col, double value);

  // Operations
  double determinant() const;
  Matrix2x2 transpose() const;
  Matrix2x2 inverse() const;
  Matrix2x2 multiply(const Matrix2x2 &other) const;

  // Static factories
  static Matrix2x2 identity();
  static Matrix2x2 rotation(double angleRadians);
  static Matrix2x2 scale(double sx, double sy);
};

/**
 * 3x3 Matrix for 2D homogeneous coordinates
 */
class Matrix3x3 {
private:
  std::array<double, 9> m_data;

public:
  Matrix3x3(); // Identity matrix

  // Element access
  double at(int row, int col) const;
  void set(int row, int col, double value);

  // Operations
  double determinant() const;
  Matrix3x3 transpose() const;
  Matrix3x3 multiply(const Matrix3x3 &other) const;

  // Static factories
  static Matrix3x3 identity();
  static Matrix3x3 translation(double tx, double ty);
  static Matrix3x3 rotation(double angleRadians);
  static Matrix3x3 scale(double sx, double sy);
};

// C-style exports for FFI
extern "C" {
double matrix2x2_determinant(double m00, double m01, double m10, double m11);
void matrix2x2_multiply(const double *a, const double *b, double *result);
}
