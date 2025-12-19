#include "transform.hpp"
#include <cmath>

// TODO: Implement all Transform2D methods
Transform2D Transform2D::identity() { return Transform2D(); }
Transform2D Transform2D::translation(double tx, double ty) {
  return Transform2D();
}
Transform2D Transform2D::rotation(double radians) { return Transform2D(); }
Transform2D Transform2D::scale(double sx, double sy) { return Transform2D(); }
Transform2D Transform2D::compose(const Transform2D &other) const {
  return Transform2D();
}
void Transform2D::transformPoint(double &x, double &y) const {}

// TODO: Implement all Transform3D methods
Transform3D Transform3D::identity() { return Transform3D(); }
Transform3D Transform3D::translation(double tx, double ty, double tz) {
  return Transform3D();
}
Transform3D Transform3D::rotationX(double radians) { return Transform3D(); }
Transform3D Transform3D::rotationY(double radians) { return Transform3D(); }
Transform3D Transform3D::rotationZ(double radians) { return Transform3D(); }
Transform3D Transform3D::scale(double sx, double sy, double sz) {
  return Transform3D();
}
Transform3D Transform3D::compose(const Transform3D &other) const {
  return Transform3D();
}
void Transform3D::transformPoint(double &x, double &y, double &z) const {}
