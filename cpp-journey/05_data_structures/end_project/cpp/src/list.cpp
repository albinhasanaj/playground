#include "list.hpp"

template <typename T>
List<T>::List() : m_head(nullptr), m_tail(nullptr), m_size(0) {}
template <typename T> List<T>::~List() { /* TODO: delete all nodes */ }
template <typename T> void List<T>::push_front(const T &value) { /* TODO */ }
template <typename T> void List<T>::push_back(const T &value) { /* TODO */ }
template <typename T> void List<T>::pop_front() { /* TODO */ }
template <typename T> void List<T>::pop_back() { /* TODO */ }
template <typename T> size_t List<T>::size() const { return m_size; }
template <typename T> bool List<T>::empty() const { return m_size == 0; }

template class List<int>;
template class List<double>;
