#include "vector.hpp"
#include <cmath>

// === Vector2 Implementation ===

Vector2::Vector2() : m_x(0), m_y(0) {}

Vector2::Vector2(double x, double y) : m_x(x), m_y(y) {}

double Vector2::x() const {
  // TODO: Return m_x
  return 0;
}

double Vector2::y() const {
  // TODO: Return m_y
  return 0;
}

double Vector2::magnitude() const {
  // TODO: Return sqrt(x² + y²)
  return 0;
}

Vector2 Vector2::normalized() const {
  // TODO: Return unit vector (divide by magnitude)
  // HINT: Handle zero magnitude case
  return Vector2();
}

double Vector2::dot(const Vector2 &other) const {
  // TODO: Return x1*x2 + y1*y2
  return 0;
}

Vector2 Vector2::add(const Vector2 &other) const {
  // TODO: Return Vector2(x + other.x, y + other.y)
  return Vector2();
}

Vector2 Vector2::subtract(const Vector2 &other) const {
  // TODO: Return Vector2(x - other.x, y - other.y)
  return Vector2();
}

Vector2 Vector2::scale(double scalar) const {
  // TODO: Return Vector2(x * scalar, y * scalar)
  return Vector2();
}

Vector2 Vector2::zero() { return Vector2(0, 0); }
Vector2 Vector2::unitX() { return Vector2(1, 0); }
Vector2 Vector2::unitY() { return Vector2(0, 1); }

// === Vector3 Implementation ===

Vector3::Vector3() : m_x(0), m_y(0), m_z(0) {}

Vector3::Vector3(double x, double y, double z) : m_x(x), m_y(y), m_z(z) {}

double Vector3::x() const {
  // TODO: Return m_x
  return 0;
}

double Vector3::y() const {
  // TODO: Return m_y
  return 0;
}

double Vector3::z() const {
  // TODO: Return m_z
  return 0;
}

double Vector3::magnitude() const {
  // TODO: Return sqrt(x² + y² + z²)
  return 0;
}

Vector3 Vector3::normalized() const {
  // TODO: Return unit vector
  return Vector3();
}

double Vector3::dot(const Vector3 &other) const {
  // TODO: Return x1*x2 + y1*y2 + z1*z2
  return 0;
}

Vector3 Vector3::cross(const Vector3 &other) const {
  // TODO: Return cross product
  // FORMULA: (y1*z2 - z1*y2, z1*x2 - x1*z2, x1*y2 - y1*x2)
  return Vector3();
}

Vector3 Vector3::add(const Vector3 &other) const {
  // TODO: Component-wise addition
  return Vector3();
}

Vector3 Vector3::subtract(const Vector3 &other) const {
  // TODO: Component-wise subtraction
  return Vector3();
}

Vector3 Vector3::scale(double scalar) const {
  // TODO: Scale all components
  return Vector3();
}

Vector3 Vector3::zero() { return Vector3(0, 0, 0); }
Vector3 Vector3::unitX() { return Vector3(1, 0, 0); }
Vector3 Vector3::unitY() { return Vector3(0, 1, 0); }
Vector3 Vector3::unitZ() { return Vector3(0, 0, 1); }

// === C Exports for FFI ===

extern "C" {

double vector2_magnitude(double x, double y) {
  // TODO: Return sqrt(x² + y²)
  return 0;
}

double vector2_dot(double x1, double y1, double x2, double y2) {
  // TODO: Return x1*x2 + y1*y2
  return 0;
}

double vector3_magnitude(double x, double y, double z) {
  // TODO: Return sqrt(x² + y² + z²)
  return 0;
}

double vector3_dot(double x1, double y1, double z1, double x2, double y2,
                   double z2) {
  // TODO: Return dot product
  return 0;
}
}
