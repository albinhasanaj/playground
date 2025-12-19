#include "matrix.hpp"
DenseMatrix::DenseMatrix(size_t r, size_t c)
    : rows(r), cols(c), data(r * c, 0) {}
double &DenseMatrix::at(size_t r, size_t c) { /* TODO */
  static double x;
  return x;
}
double DenseMatrix::at(size_t r, size_t c) const { /* TODO */ return 0; }
size_t DenseMatrix::numRows() const { return rows; }
size_t DenseMatrix::numCols() const { return cols; }
DenseMatrix DenseMatrix::operator*(const DenseMatrix &other) const { /* TODO */
  return DenseMatrix(1, 1);
}
std::vector<double>
DenseMatrix::solve(const std::vector<double> &b) const { /* TODO */
  return {};
}
DenseMatrix DenseMatrix::identity(size_t n) { /* TODO */
  return DenseMatrix(n, n);
}
