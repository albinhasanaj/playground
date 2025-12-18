#pragma once
extern "C" {
void transform_point_2d(double *matrix3x3, double x, double y, double *out_x,
                        double *out_y);
void matrix_multiply_3x3(const double *a, const double *b, double *result);
void create_rotation_matrix(double angle_radians, double *result);
void create_scale_matrix(double sx, double sy, double *result);
}
