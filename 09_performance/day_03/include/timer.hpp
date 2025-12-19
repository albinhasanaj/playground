#pragma once
#include <chrono>
#include <string>

class Timer {
  std::chrono::high_resolution_clock::time_point m_start;
  std::string m_name;

public:
  Timer(const std::string &name);
  ~Timer();
  double elapsed() const;
};
