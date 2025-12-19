#pragma once
#include <cstddef>

template <typename T> struct Node {
  T data;
  Node *next;
  Node(T d) : data(d), next(nullptr) {}
};

template <typename T> class SinglyLinkedList {
  Node<T> *m_head;
  size_t m_size;

public:
  SinglyLinkedList();
  ~SinglyLinkedList();
  void push_front(const T &value);
  void push_back(const T &value);
  void pop_front();
  T &front();
  size_t size() const;
  bool empty() const;
  void reverse();
  Node<T> *find(const T &value);
};

template <typename T> struct DNode {
  T data;
  DNode *prev;
  DNode *next;
};

template <typename T> class DoublyLinkedList {
  DNode<T> *m_head;
  DNode<T> *m_tail;
  size_t m_size;

public:
  DoublyLinkedList() : m_head(nullptr), m_tail(nullptr), m_size(0) {}
  ~DoublyLinkedList() { /* TODO */ }
  void push_front(const T &value) { /* TODO */ }
  void push_back(const T &value) { /* TODO */ }
  void pop_front() { /* TODO */ }
  void pop_back() { /* TODO */ }
  T &front() { return m_head->data; }
  T &back() { return m_tail->data; }
  size_t size() const { return m_size; }
};
