#pragma once
#include "mat4.hpp"
#include "vec3.hpp"

/**
 * Transform component combining position, rotation, scale
 */
struct Transform {
  Vec3 position;
  Vec3 rotation; // Euler angles in radians
  Vec3 scale;

  Transform();

  Mat4 toMatrix() const;
  static Transform fromMatrix(const Mat4 &mat);
};

/**
 * Transform utility functions
 */
namespace TransformUtils {

/**
 * @brief Transforms a point by a matrix
 */
Vec3 transformPoint(const Mat4 &mat, const Vec3 &point);

/**
 * @brief Transforms a direction (ignores translation)
 */
Vec3 transformDirection(const Mat4 &mat, const Vec3 &dir);

/**
 * @brief Projects 3D point to 2D screen coordinates
 */
Vec3 project(const Vec3 &point, const Mat4 &modelView, const Mat4 &projection,
             int screenWidth, int screenHeight);

} // namespace TransformUtils
