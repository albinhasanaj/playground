#include "mat4.hpp"
#include <algorithm>
#include <cmath>

Mat4::Mat4() : m_data{1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1} {}

double Mat4::at(int row, int col) const {
  // TODO: Return element (column-major: index = col*4 + row)
  return 0;
}

void Mat4::set(int row, int col, double value) {
  // TODO: Set element
}

const double *Mat4::data() const { return m_data.data(); }

Mat4 Mat4::operator*(const Mat4 &other) const {
  // TODO: 4x4 matrix multiplication
  return Mat4();
}

Vec3 Mat4::operator*(const Vec3 &v) const {
  // TODO: Transform point (assume w=1)
  return Vec3();
}

Mat4 Mat4::transposed() const {
  // TODO: Transpose matrix
  return Mat4();
}

Mat4 Mat4::inverted() const {
  // TODO: Compute inverse matrix
  return Mat4();
}

double Mat4::determinant() const {
  // TODO: Compute 4x4 determinant
  return 0;
}

Mat4 Mat4::identity() { return Mat4(); }

Mat4 Mat4::translation(double tx, double ty, double tz) {
  // TODO: Create translation matrix
  return Mat4();
}

Mat4 Mat4::scale(double sx, double sy, double sz) {
  // TODO: Create scale matrix
  return Mat4();
}

Mat4 Mat4::rotationX(double radians) {
  // TODO: Create X rotation matrix
  return Mat4();
}

Mat4 Mat4::rotationY(double radians) {
  // TODO: Create Y rotation matrix
  return Mat4();
}

Mat4 Mat4::rotationZ(double radians) {
  // TODO: Create Z rotation matrix
  return Mat4();
}

Mat4 Mat4::perspective(double fov, double aspect, double near, double far) {
  // TODO: Create perspective projection matrix
  return Mat4();
}

Mat4 Mat4::lookAt(const Vec3 &eye, const Vec3 &target, const Vec3 &up) {
  // TODO: Create view matrix
  return Mat4();
}

// C exports
extern "C" {

void mat4_identity(double *out) {
  // TODO: Fill out with identity matrix
}

void mat4_translation(double tx, double ty, double tz, double *out) {
  // TODO: Fill out with translation matrix
}

void mat4_multiply(const double *a, const double *b, double *out) {
  // TODO: Matrix multiplication
}

void mat4_transform_vec3(const double *mat, double x, double y, double z,
                         double *out) {
  // TODO: Transform vector by matrix
}
}
