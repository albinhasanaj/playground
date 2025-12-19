#pragma once

/**
 * @brief Computes distance traveled: d = v₀t + ½at²
 * @param initialVelocity Starting velocity (m/s)
 * @param time Time elapsed (s)
 * @param acceleration Acceleration (m/s²)
 * @return Distance traveled (m)
 */
double computeDistance(double initialVelocity, double time,
                       double acceleration);

/**
 * @brief Computes final velocity: v = v₀ + at
 * @param initialVelocity Starting velocity (m/s)
 * @param time Time elapsed (s)
 * @param acceleration Acceleration (m/s²)
 * @return Final velocity (m/s)
 */
double computeVelocity(double initialVelocity, double time,
                       double acceleration);

/**
 * @brief Computes kinetic energy: KE = ½mv²
 * @param mass Mass of object (kg)
 * @param velocity Velocity of object (m/s)
 * @return Kinetic energy (J)
 */
double kineticEnergy(double mass, double velocity);

/**
 * @brief Computes gravitational potential energy: PE = mgh
 * @param mass Mass of object (kg)
 * @param height Height above reference (m)
 * @return Potential energy (J)
 */
double potentialEnergy(double mass, double height);
