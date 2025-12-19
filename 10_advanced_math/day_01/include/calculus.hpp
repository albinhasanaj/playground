#pragma once
#include <functional>

using Function = std::function<double(double)>;

double trapezoidalRule(Function f, double a, double b, int n);
double simpsonsRule(Function f, double a, double b, int n);
double forwardDifference(Function f, double x, double h);
double centralDifference(Function f, double x, double h);
