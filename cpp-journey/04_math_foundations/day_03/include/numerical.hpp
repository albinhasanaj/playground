#pragma once
#include <cmath>
#include <vector>

constexpr double EPSILON = 1e-10;

bool almostEqual(double a, double b, double epsilon = EPSILON);
double kahanSum(const std::vector<double> &values);
double stableQuadratic(double a, double b, double c, double &x1, double &x2);
void demonstrateCatastrophicCancellation();
void demonstratePrecisionLoss();
