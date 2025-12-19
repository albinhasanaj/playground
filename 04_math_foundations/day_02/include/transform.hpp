#pragma once
#include <array>

struct Transform2D {
  std::array<double, 9> matrix; // 3x3 homogeneous

  static Transform2D identity();
  static Transform2D translation(double tx, double ty);
  static Transform2D rotation(double radians);
  static Transform2D scale(double sx, double sy);

  Transform2D compose(const Transform2D &other) const;
  void transformPoint(double &x, double &y) const;
};

struct Transform3D {
  std::array<double, 16> matrix; // 4x4 homogeneous

  static Transform3D identity();
  static Transform3D translation(double tx, double ty, double tz);
  static Transform3D rotationX(double radians);
  static Transform3D rotationY(double radians);
  static Transform3D rotationZ(double radians);
  static Transform3D scale(double sx, double sy, double sz);

  Transform3D compose(const Transform3D &other) const;
  void transformPoint(double &x, double &y, double &z) const;
};
