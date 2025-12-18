#pragma once
#include <cstddef>

template <typename T> class DynamicArray {
  T *m_data;
  size_t m_size;
  size_t m_capacity;

  void grow();

public:
  DynamicArray();
  ~DynamicArray();
  DynamicArray(const DynamicArray &other);
  DynamicArray(DynamicArray &&other) noexcept;
  DynamicArray &operator=(const DynamicArray &other);
  DynamicArray &operator=(DynamicArray &&other) noexcept;

  void push_back(const T &value);
  void pop_back();
  T &at(size_t index);
  const T &at(size_t index) const;
  T &operator[](size_t index);

  size_t size() const;
  size_t capacity() const;
  bool empty() const;
  void clear();
  void reserve(size_t newCapacity);
  void shrink_to_fit();

  T *begin();
  T *end();
};
