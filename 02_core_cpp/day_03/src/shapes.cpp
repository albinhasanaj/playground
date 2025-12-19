#include "shapes.hpp"
#include <cmath>

std::string shapeTypeName(ShapeType type) {
  // TODO: Use switch statement to return shape name
  // ShapeType::Circle -> "Circle"
  // etc.
  return "";
}

double distance(const Point2D &a, const Point2D &b) {
  // TODO: Compute Euclidean distance: sqrt((ax-bx)² + (ay-by)²)
  return 0.0;
}

double distance(const Point3D &a, const Point3D &b) {
  // TODO: Compute 3D Euclidean distance
  // sqrt((ax-bx)² + (ay-by)² + (az-bz)²)
  return 0.0;
}

double area(const Circle &c) {
  // TODO: Return π × r²
  return 0.0;
}

double area(const Rectangle &r) {
  // TODO: Return width × height
  return 0.0;
}

double area(const Triangle &t) {
  // TODO: Use Shoelace formula for triangle area
  // Area = |x1(y2-y3) + x2(y3-y1) + x3(y1-y2)| / 2
  return 0.0;
}

double perimeter(const Circle &c) {
  // TODO: Return 2 × π × r
  return 0.0;
}

double perimeter(const Rectangle &r) {
  // TODO: Return 2 × (width + height)
  return 0.0;
}

double perimeter(const Triangle &t) {
  // TODO: Sum of all three side lengths
  // HINT: Use distance() for each pair of vertices
  return 0.0;
}
