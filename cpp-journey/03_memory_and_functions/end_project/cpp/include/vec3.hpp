#pragma once
#include <cmath>

/**
 * 3D Vector with efficient memory layout
 */
class Vec3 {
private:
  double m_x, m_y, m_z;

public:
  Vec3();
  Vec3(double x, double y, double z);

  // Accessors
  double x() const;
  double y() const;
  double z() const;

  // Mutators
  void setX(double x);
  void setY(double y);
  void setZ(double z);

  // Operations
  double length() const;
  double lengthSquared() const;
  Vec3 normalized() const;

  // Vector math
  double dot(const Vec3 &other) const;
  Vec3 cross(const Vec3 &other) const;

  // Arithmetic
  Vec3 operator+(const Vec3 &other) const;
  Vec3 operator-(const Vec3 &other) const;
  Vec3 operator*(double scalar) const;
  Vec3 operator/(double scalar) const;

  Vec3 &operator+=(const Vec3 &other);
  Vec3 &operator-=(const Vec3 &other);
  Vec3 &operator*=(double scalar);

  // Comparison
  bool operator==(const Vec3 &other) const;

  // Static factories
  static Vec3 zero();
  static Vec3 one();
  static Vec3 up();
  static Vec3 right();
  static Vec3 forward();

  // Interpolation
  static Vec3 lerp(const Vec3 &a, const Vec3 &b, double t);
};

// C exports for Python
extern "C" {
void vec3_create(double x, double y, double z, double *out);
double vec3_length(double x, double y, double z);
double vec3_dot(double x1, double y1, double z1, double x2, double y2,
                double z2);
void vec3_cross(double x1, double y1, double z1, double x2, double y2,
                double z2, double *out);
void vec3_normalize(double x, double y, double z, double *out);
}
