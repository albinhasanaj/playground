#pragma once

// Mathematical constants
constexpr double PI = 3.14159265358979323846;
constexpr double GRAVITY = 9.80665; // m/s²

/**
 * @brief Converts degrees to radians
 * @param degrees Angle in degrees
 * @return Angle in radians
 */
double degreesToRadians(double degrees);

/**
 * @brief Converts radians to degrees
 * @param radians Angle in radians
 * @return Angle in degrees
 */
double radiansToDegrees(double radians);

/**
 * @brief Clamps a value between min and max
 * @param value The value to clamp
 * @param min Minimum allowed value
 * @param max Maximum allowed value
 * @return Clamped value
 */
double clamp(double value, double min, double max);
