#include "counter.hpp"
#include <algorithm>
#include <iostream>

Counter::Counter(int startValue, int minValue, int maxValue, int step) {
  // TODO: Initialize all member variables
  // TODO: Clamp startValue to [minValue, maxValue]
}

int Counter::getValue() const {
  // TODO: Return m_value
  return 0;
}

void Counter::increment() {
  // TODO: Add m_step to m_value
  // TODO: Clamp to not exceed m_max
}

void Counter::decrement() {
  // TODO: Subtract m_step from m_value
  // TODO: Clamp to not go below m_min
}

void Counter::reset() {
  // TODO: Set m_value to m_min
}

bool Counter::isAtMax() const {
  // TODO: Return true if m_value >= m_max
  return false;
}

bool Counter::isAtMin() const {
  // TODO: Return true if m_value <= m_min
  return false;
}

void Counter::setValue(int value) {
  // TODO: Set m_value, clamped to [m_min, m_max]
}

void Counter::print() const {
  // TODO: Print "Counter: value/max (step: N)"
}
