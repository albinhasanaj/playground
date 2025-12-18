#pragma once

/**
 * 2D Vector for math operations
 */
class Vector2 {
private:
  double m_x;
  double m_y;

public:
  Vector2();
  Vector2(double x, double y);

  // Accessors
  double x() const;
  double y() const;

  // Operations
  double magnitude() const;
  Vector2 normalized() const;
  double dot(const Vector2 &other) const;
  Vector2 add(const Vector2 &other) const;
  Vector2 subtract(const Vector2 &other) const;
  Vector2 scale(double scalar) const;

  // Static factory methods (useful for bindings)
  static Vector2 zero();
  static Vector2 unitX();
  static Vector2 unitY();
};

/**
 * 3D Vector for math operations
 */
class Vector3 {
private:
  double m_x;
  double m_y;
  double m_z;

public:
  Vector3();
  Vector3(double x, double y, double z);

  // Accessors
  double x() const;
  double y() const;
  double z() const;

  // Operations
  double magnitude() const;
  Vector3 normalized() const;
  double dot(const Vector3 &other) const;
  Vector3 cross(const Vector3 &other) const;
  Vector3 add(const Vector3 &other) const;
  Vector3 subtract(const Vector3 &other) const;
  Vector3 scale(double scalar) const;

  // Static factory methods
  static Vector3 zero();
  static Vector3 unitX();
  static Vector3 unitY();
  static Vector3 unitZ();
};

// C-style exports for FFI (extern "C" for name mangling)
extern "C" {
// Vector2 exports
double vector2_magnitude(double x, double y);
double vector2_dot(double x1, double y1, double x2, double y2);

// Vector3 exports
double vector3_magnitude(double x, double y, double z);
double vector3_dot(double x1, double y1, double z1, double x2, double y2,
                   double z2);
}
