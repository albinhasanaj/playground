#pragma once
#include <functional>
#include <vector>

using GradFunction =
    std::function<std::vector<double>(const std::vector<double> &)>;

std::vector<double> gradientDescent(GradFunction gradient,
                                    std::vector<double> x0, double lr,
                                    int maxIter);
double newtonMethod(std::function<double(double)> f,
                    std::function<double(double)> df, double x0, int maxIter);
