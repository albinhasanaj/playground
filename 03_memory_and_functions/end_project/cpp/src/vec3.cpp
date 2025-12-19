#include "vec3.hpp"
#include <cmath>

Vec3::Vec3() : m_x(0), m_y(0), m_z(0) {}
Vec3::Vec3(double x, double y, double z) : m_x(x), m_y(y), m_z(z) {}

double Vec3::x() const {
  // TODO: Return m_x
  return 0;
}

double Vec3::y() const {
  // TODO: Return m_y
  return 0;
}

double Vec3::z() const {
  // TODO: Return m_z
  return 0;
}

void Vec3::setX(double x) { /* TODO */ }
void Vec3::setY(double y) { /* TODO */ }
void Vec3::setZ(double z) { /* TODO */ }

double Vec3::length() const {
  // TODO: Return sqrt(x² + y² + z²)
  return 0;
}

double Vec3::lengthSquared() const {
  // TODO: Return x² + y² + z² (faster than length)
  return 0;
}

Vec3 Vec3::normalized() const {
  // TODO: Return unit vector
  return Vec3();
}

double Vec3::dot(const Vec3 &other) const {
  // TODO: Return dot product
  return 0;
}

Vec3 Vec3::cross(const Vec3 &other) const {
  // TODO: Return cross product
  return Vec3();
}

Vec3 Vec3::operator+(const Vec3 &other) const {
  // TODO: Component-wise addition
  return Vec3();
}

Vec3 Vec3::operator-(const Vec3 &other) const {
  // TODO: Component-wise subtraction
  return Vec3();
}

Vec3 Vec3::operator*(double scalar) const {
  // TODO: Scalar multiplication
  return Vec3();
}

Vec3 Vec3::operator/(double scalar) const {
  // TODO: Scalar division
  return Vec3();
}

Vec3 &Vec3::operator+=(const Vec3 &other) {
  // TODO: In-place addition
  return *this;
}

Vec3 &Vec3::operator-=(const Vec3 &other) {
  // TODO: In-place subtraction
  return *this;
}

Vec3 &Vec3::operator*=(double scalar) {
  // TODO: In-place scalar multiplication
  return *this;
}

bool Vec3::operator==(const Vec3 &other) const {
  // TODO: Check equality (consider epsilon for floating point)
  return false;
}

Vec3 Vec3::zero() { return Vec3(0, 0, 0); }
Vec3 Vec3::one() { return Vec3(1, 1, 1); }
Vec3 Vec3::up() { return Vec3(0, 1, 0); }
Vec3 Vec3::right() { return Vec3(1, 0, 0); }
Vec3 Vec3::forward() { return Vec3(0, 0, 1); }

Vec3 Vec3::lerp(const Vec3 &a, const Vec3 &b, double t) {
  // TODO: Linear interpolation: a + t*(b-a)
  return Vec3();
}

// C exports
extern "C" {

void vec3_create(double x, double y, double z, double *out) {
  // TODO: Store x,y,z in out array
}

double vec3_length(double x, double y, double z) {
  // TODO: Return sqrt(x² + y² + z²)
  return 0;
}

double vec3_dot(double x1, double y1, double z1, double x2, double y2,
                double z2) {
  // TODO: Return dot product
  return 0;
}

void vec3_cross(double x1, double y1, double z1, double x2, double y2,
                double z2, double *out) {
  // TODO: Store cross product in out
}

void vec3_normalize(double x, double y, double z, double *out) {
  // TODO: Normalize and store in out
}
}
