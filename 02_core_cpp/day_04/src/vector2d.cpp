#include "vector2d.hpp"
#include <cmath>
#include <iostream>

Vector2D::Vector2D() {
  // TODO: Initialize to zero vector (0, 0)
}

Vector2D::Vector2D(double x, double y) {
  // TODO: Initialize m_x and m_y from parameters
}

double Vector2D::getX() const {
  // TODO: Return m_x
  return 0.0;
}

double Vector2D::getY() const {
  // TODO: Return m_y
  return 0.0;
}

void Vector2D::setX(double x) {
  // TODO: Set m_x to x
}

void Vector2D::setY(double y) {
  // TODO: Set m_y to y
}

double Vector2D::magnitude() const {
  // TODO: Return sqrt(m_x² + m_y²)
  return 0.0;
}

Vector2D Vector2D::normalized() const {
  // TODO: Return unit vector (this / magnitude)
  // HINT: Handle zero magnitude case
  return Vector2D();
}

double Vector2D::dot(const Vector2D &other) const {
  // TODO: Return m_x * other.m_x + m_y * other.m_y
  return 0.0;
}

Vector2D Vector2D::add(const Vector2D &other) const {
  // TODO: Return new Vector2D with components added
  return Vector2D();
}

Vector2D Vector2D::subtract(const Vector2D &other) const {
  // TODO: Return new Vector2D with components subtracted
  return Vector2D();
}

Vector2D Vector2D::scale(double scalar) const {
  // TODO: Return new Vector2D with components multiplied by scalar
  return Vector2D();
}

void Vector2D::print() const {
  // TODO: Print in format "(x, y)"
}
