#include "timer.hpp"
#include <iostream>
Timer::Timer(const std::string &name) : m_name(name) {
  m_start = std::chrono::high_resolution_clock::now();
}
Timer::~Timer() { /* TODO: Print elapsed */ }
double Timer::elapsed() const { /* TODO */ return 0; }
