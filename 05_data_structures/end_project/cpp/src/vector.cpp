#include "vector.hpp"
#include <string>

template <typename T>
Vector<T>::Vector() : m_data(nullptr), m_size(0), m_capacity(0) {}
template <typename T> Vector<T>::~Vector() { /* TODO: delete[] m_data */ }
template <typename T> void Vector<T>::push_back(const T &value) { /* TODO */ }
template <typename T> void Vector<T>::pop_back() { /* TODO */ }
template <typename T> T &Vector<T>::operator[](size_t index) {
  return m_data[index];
}
template <typename T> const T &Vector<T>::operator[](size_t index) const {
  return m_data[index];
}
template <typename T> size_t Vector<T>::size() const { return m_size; }
template <typename T> size_t Vector<T>::capacity() const { return m_capacity; }
template <typename T> bool Vector<T>::empty() const { return m_size == 0; }
template <typename T> typename Vector<T>::iterator Vector<T>::begin() {
  return m_data;
}
template <typename T> typename Vector<T>::iterator Vector<T>::end() {
  return m_data + m_size;
}
template <typename T>
typename Vector<T>::const_iterator Vector<T>::begin() const {
  return m_data;
}
template <typename T>
typename Vector<T>::const_iterator Vector<T>::end() const {
  return m_data + m_size;
}

template class Vector<int>;
template class Vector<double>;
template class Vector<std::string>;
