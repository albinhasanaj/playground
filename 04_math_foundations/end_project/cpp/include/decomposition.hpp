#pragma once
#include "matrix.hpp"

struct LUDecomposition {
  DenseMatrix L, U;
  std::vector<size_t> permutation;
};

LUDecomposition luDecompose(const DenseMatrix &A);
double powerIteration(const DenseMatrix &A, std::vector<double> &eigenvector,
                      int maxIter = 100);
