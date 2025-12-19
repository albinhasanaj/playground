#include "physics.hpp"
#include "utils.hpp"

double computeDistance(double initialVelocity, double time,
                       double acceleration) {
  // TODO: Implement d = v₀t + ½at²
  // HINT: Return initialVelocity * time + 0.5 * acceleration * time * time
  return 0.0;
}

double computeVelocity(double initialVelocity, double time,
                       double acceleration) {
  // TODO: Implement v = v₀ + at
  return 0.0;
}

double kineticEnergy(double mass, double velocity) {
  // TODO: Implement KE = ½mv²
  return 0.0;
}

double potentialEnergy(double mass, double height) {
  // TODO: Implement PE = mgh
  // HINT: Use the GRAVITY constant from utils.hpp
  return 0.0;
}
