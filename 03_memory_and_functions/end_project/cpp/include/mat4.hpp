#pragma once
#include "vec3.hpp"
#include <array>

/**
 * 4x4 Matrix for 3D transformations
 * Stored in column-major order (OpenGL style)
 */
class Mat4 {
private:
  std::array<double, 16> m_data;

public:
  Mat4(); // Identity

  // Element access
  double at(int row, int col) const;
  void set(int row, int col, double value);
  const double *data() const;

  // Matrix operations
  Mat4 operator*(const Mat4 &other) const;
  Vec3 operator*(const Vec3 &v) const; // Transform point

  Mat4 transposed() const;
  Mat4 inverted() const;
  double determinant() const;

  // Factory methods for transforms
  static Mat4 identity();
  static Mat4 translation(double tx, double ty, double tz);
  static Mat4 scale(double sx, double sy, double sz);
  static Mat4 rotationX(double radians);
  static Mat4 rotationY(double radians);
  static Mat4 rotationZ(double radians);
  static Mat4 perspective(double fov, double aspect, double near, double far);
  static Mat4 lookAt(const Vec3 &eye, const Vec3 &target, const Vec3 &up);
};

// C exports
extern "C" {
void mat4_identity(double *out);
void mat4_translation(double tx, double ty, double tz, double *out);
void mat4_multiply(const double *a, const double *b, double *out);
void mat4_transform_vec3(const double *mat, double x, double y, double z,
                         double *out);
}
