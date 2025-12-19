#pragma once

/**
 * @brief Computes the area of a circle
 * @param radius The radius of the circle
 * @return π × r²
 */
double circleArea(double radius);

/**
 * @brief Computes the circumference of a circle
 * @param radius The radius of the circle
 * @return 2 × π × r
 */
double circleCircumference(double radius);

/**
 * @brief Computes the area of a rectangle
 * @param width The width of the rectangle
 * @param height The height of the rectangle
 * @return width × height
 */
double rectangleArea(double width, double height);

/**
 * @brief Computes the perimeter of a rectangle
 * @param width The width of the rectangle
 * @param height The height of the rectangle
 * @return 2 × (width + height)
 */
double rectanglePerimeter(double width, double height);

/**
 * @brief Computes the area of a triangle using Heron's formula
 * @param a First side length
 * @param b Second side length
 * @param c Third side length
 * @return Area via Heron's formula
 */
double triangleArea(double a, double b, double c);
