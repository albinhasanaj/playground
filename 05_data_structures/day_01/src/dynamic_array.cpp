#include "dynamic_array.hpp"
#include <algorithm>
#include <stdexcept>

template <typename T>
DynamicArray<T>::DynamicArray() : m_data(nullptr), m_size(0), m_capacity(0) {}

template <typename T>
DynamicArray<T>::~DynamicArray() { /* TODO: delete[] m_data; */ }

template <typename T>
void DynamicArray<T>::grow() { /* TODO: Double capacity, allocate new, copy,
                                  delete old */
}

template <typename T>
void DynamicArray<T>::push_back(const T &value) { /* TODO */ }

template <typename T> void DynamicArray<T>::pop_back() { /* TODO */ }

template <typename T>
T &DynamicArray<T>::at(size_t index) { /* TODO: bounds check */
  static T t;
  return t;
}

template <typename T> size_t DynamicArray<T>::size() const { return m_size; }

template <typename T> size_t DynamicArray<T>::capacity() const {
  return m_capacity;
}

// Explicit template instantiations
template class DynamicArray<int>;
template class DynamicArray<double>;
