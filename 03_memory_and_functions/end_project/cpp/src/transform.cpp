#include "transform.hpp"

Transform::Transform()
    : position(Vec3::zero()), rotation(Vec3::zero()), scale(Vec3::one()) {}

Mat4 Transform::toMatrix() const {
  // TODO: Combine translation, rotation, scale into single matrix
  // Order: Scale * RotateZ * RotateY * RotateX * Translate
  return Mat4();
}

Transform Transform::fromMatrix(const Mat4 &mat) {
  // TODO: Extract position, rotation, scale from matrix
  return Transform();
}

namespace TransformUtils {

Vec3 transformPoint(const Mat4 &mat, const Vec3 &point) {
  // TODO: Transform point (w=1)
  return Vec3();
}

Vec3 transformDirection(const Mat4 &mat, const Vec3 &dir) {
  // TODO: Transform direction (w=0, ignores translation)
  return Vec3();
}

Vec3 project(const Vec3 &point, const Mat4 &modelView, const Mat4 &projection,
             int screenWidth, int screenHeight) {
  // TODO: Project 3D point to screen coordinates
  return Vec3();
}

} // namespace TransformUtils
