#include "mat4.hpp"
#include "transform.hpp"
#include "vec3.hpp"
#include <iostream>

int main() {
  std::cout << "=== Vector Math Engine Tests ===" << std::endl;

  // TODO: Test Vec3 operations
  // Vec3 a(1, 2, 3);
  // Vec3 b(4, 5, 6);
  // double dot = a.dot(b);
  // Vec3 cross = a.cross(b);

  // TODO: Test Mat4 operations
  // Mat4 trans = Mat4::translation(10, 20, 30);
  // Vec3 p = trans * Vec3(1, 1, 1);

  // TODO: Test Transform
  // Transform t;
  // t.position = Vec3(10, 0, 0);
  // t.rotation = Vec3(0, 3.14159/4, 0);
  // Mat4 m = t.toMatrix();

  std::cout << "All tests completed!" << std::endl;
  return 0;
}
