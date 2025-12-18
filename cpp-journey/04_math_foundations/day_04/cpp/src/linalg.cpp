#include "linalg.hpp"
#include <cmath>

extern "C" {
void transform_point_2d(double *matrix3x3, double x, double y, double *out_x,
                        double *out_y) {
  // TODO: Apply 3x3 homogeneous transform to (x, y)
}
void matrix_multiply_3x3(const double *a, const double *b, double *result) {
  // TODO: 3x3 matrix multiplication
}
void create_rotation_matrix(double angle_radians, double *result) {
  // TODO: Fill result with 3x3 rotation matrix
}
void create_scale_matrix(double sx, double sy, double *result) {
  // TODO: Fill result with 3x3 scale matrix
}
}
