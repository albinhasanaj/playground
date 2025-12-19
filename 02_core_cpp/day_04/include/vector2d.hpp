#pragma once

/**
 * A 2D mathematical vector class
 */
class Vector2D {
private:
  double m_x;
  double m_y;

public:
  /**
   * @brief Default constructor - creates zero vector
   */
  Vector2D();

  /**
   * @brief Parameterized constructor
   * @param x X component
   * @param y Y component
   */
  Vector2D(double x, double y);

  // Getters
  double getX() const;
  double getY() const;

  // Setters
  void setX(double x);
  void setY(double y);

  /**
   * @brief Computes magnitude (length) of vector
   * @return sqrt(x² + y²)
   */
  double magnitude() const;

  /**
   * @brief Returns normalized (unit) vector
   * @return Vector with magnitude 1 in same direction
   */
  Vector2D normalized() const;

  /**
   * @brief Computes dot product with another vector
   * @param other The other vector
   * @return x1*x2 + y1*y2
   */
  double dot(const Vector2D &other) const;

  /**
   * @brief Adds another vector and returns result
   */
  Vector2D add(const Vector2D &other) const;

  /**
   * @brief Subtracts another vector and returns result
   */
  Vector2D subtract(const Vector2D &other) const;

  /**
   * @brief Scales vector by a scalar
   * @param scalar The multiplier
   * @return Scaled vector
   */
  Vector2D scale(double scalar) const;

  /**
   * @brief Prints vector to stdout
   */
  void print() const;
};
