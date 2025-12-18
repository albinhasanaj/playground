#pragma once
#include <string>

/**
 * Scoped enum for shape types
 */
enum class ShapeType { Circle, Rectangle, Triangle, Square };

/**
 * 2D Point structure
 */
struct Point2D {
  double x;
  double y;
};

/**
 * 3D Point structure
 */
struct Point3D {
  double x;
  double y;
  double z;
};

/**
 * Circle defined by center and radius
 */
struct Circle {
  Point2D center;
  double radius;
};

/**
 * Rectangle defined by top-left corner, width, and height
 */
struct Rectangle {
  Point2D topLeft;
  double width;
  double height;
};

/**
 * Triangle defined by three vertices
 */
struct Triangle {
  Point2D p1;
  Point2D p2;
  Point2D p3;
};

/**
 * @brief Returns string name of shape type
 */
std::string shapeTypeName(ShapeType type);

/**
 * @brief Computes distance between two 2D points
 */
double distance(const Point2D &a, const Point2D &b);

/**
 * @brief Computes distance between two 3D points
 */
double distance(const Point3D &a, const Point3D &b);

/**
 * @brief Computes area of a circle
 */
double area(const Circle &c);

/**
 * @brief Computes area of a rectangle
 */
double area(const Rectangle &r);

/**
 * @brief Computes area of a triangle using Shoelace formula
 */
double area(const Triangle &t);

/**
 * @brief Computes perimeter of a circle
 */
double perimeter(const Circle &c);

/**
 * @brief Computes perimeter of a rectangle
 */
double perimeter(const Rectangle &r);

/**
 * @brief Computes perimeter of a triangle
 */
double perimeter(const Triangle &t);
