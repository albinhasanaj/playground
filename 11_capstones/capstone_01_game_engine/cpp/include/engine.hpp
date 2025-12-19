#pragma once

class Engine {
public:
  void init();
  void update(float deltaTime);
  void render();
  void shutdown();
  bool isRunning() const;
};
