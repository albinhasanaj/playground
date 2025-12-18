#pragma once

/**
 * A simple counter class demonstrating encapsulation
 */
class Counter {
private:
  int m_value;
  int m_min;
  int m_max;
  int m_step;

public:
  /**
   * @brief Constructs a counter with given bounds
   * @param startValue Initial value
   * @param minValue Minimum allowed value
   * @param maxValue Maximum allowed value
   * @param step Increment/decrement step size (default 1)
   */
  Counter(int startValue = 0, int minValue = 0, int maxValue = 100,
          int step = 1);

  /**
   * @brief Gets current value
   */
  int getValue() const;

  /**
   * @brief Increments counter by step, respecting max
   */
  void increment();

  /**
   * @brief Decrements counter by step, respecting min
   */
  void decrement();

  /**
   * @brief Resets counter to minimum value
   */
  void reset();

  /**
   * @brief Checks if counter is at maximum
   */
  bool isAtMax() const;

  /**
   * @brief Checks if counter is at minimum
   */
  bool isAtMin() const;

  /**
   * @brief Sets value directly (clamped to bounds)
   */
  void setValue(int value);

  /**
   * @brief Prints counter status
   */
  void print() const;
};
