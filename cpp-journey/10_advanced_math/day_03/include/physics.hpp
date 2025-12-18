#pragma once

struct Vec2 {
  double x, y;
};

struct Particle {
  Vec2 position;
  Vec2 velocity;
  double mass;
};

void eulerStep(Particle &p, Vec2 force, double dt);
void verletStep(Particle &p, Vec2 force, double dt);
void rungeKutta4Step(Particle &p, Vec2 force, double dt);
