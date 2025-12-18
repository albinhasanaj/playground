#include "linked_list.hpp"
template <typename T>
SinglyLinkedList<T>::SinglyLinkedList() : m_head(nullptr), m_size(0) {}
template <typename T>
SinglyLinkedList<T>::~SinglyLinkedList() { /* TODO: delete all nodes */ }
template <typename T>
void SinglyLinkedList<T>::push_front(const T &value) { /* TODO */ }
template <typename T>
void SinglyLinkedList<T>::push_back(const T &value) { /* TODO */ }
template <typename T> void SinglyLinkedList<T>::pop_front() { /* TODO */ }
template <typename T> T &SinglyLinkedList<T>::front() { return m_head->data; }
template <typename T> size_t SinglyLinkedList<T>::size() const {
  return m_size;
}
template <typename T> bool SinglyLinkedList<T>::empty() const {
  return m_size == 0;
}
template <typename T> void SinglyLinkedList<T>::reverse() { /* TODO */ }
template <typename T>
Node<T> *SinglyLinkedList<T>::find(const T &value) { /* TODO */
  return nullptr;
}

template class SinglyLinkedList<int>;
template class DoublyLinkedList<int>;
