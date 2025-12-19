#pragma once
#include <cstddef>
#include <initializer_list>

template <typename T> class Vector {
  T *m_data;
  size_t m_size;
  size_t m_capacity;

public:
  using iterator = T *;
  using const_iterator = const T *;

  Vector();
  Vector(std::initializer_list<T> init);
  Vector(const Vector &other);
  Vector(Vector &&other) noexcept;
  ~Vector();

  Vector &operator=(const Vector &other);
  Vector &operator=(Vector &&other) noexcept;

  void push_back(const T &value);
  void push_back(T &&value);
  void pop_back();
  void clear();
  void reserve(size_t cap);
  void resize(size_t count);

  T &operator[](size_t index);
  const T &operator[](size_t index) const;
  T &at(size_t index);
  T &front();
  T &back();

  size_t size() const;
  size_t capacity() const;
  bool empty() const;

  iterator begin();
  iterator end();
  const_iterator begin() const;
  const_iterator end() const;
};
