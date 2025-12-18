#pragma once
#include <vector>

class DenseMatrix {
  std::vector<double> data;
  size_t rows, cols;

public:
  DenseMatrix() : rows(0), cols(0) {}
  DenseMatrix(size_t r, size_t c);
  double &at(size_t r, size_t c);
  double at(size_t r, size_t c) const;

  size_t numRows() const;
  size_t numCols() const;

  DenseMatrix operator*(const DenseMatrix &other) const;
  std::vector<double> solve(const std::vector<double> &b) const;

  static DenseMatrix identity(size_t n);
};
