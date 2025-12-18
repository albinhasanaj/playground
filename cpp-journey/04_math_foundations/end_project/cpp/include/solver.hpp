#pragma once
#include "matrix.hpp"
#include <vector>

std::vector<double> solveLinear(const DenseMatrix &A,
                                const std::vector<double> &b);
std::vector<double> leastSquares(const DenseMatrix &A,
                                 const std::vector<double> &b);
