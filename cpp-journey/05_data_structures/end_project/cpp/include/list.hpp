#pragma once
#include <cstddef>

template <typename T> class List {
  struct Node {
    T data;
    Node *prev;
    Node *next;
  };
  Node *m_head;
  Node *m_tail;
  size_t m_size;

public:
  class iterator {
    Node *m_node;

  public:
    iterator(Node *n) : m_node(n) {}
    T &operator*() { return m_node->data; }
    iterator &operator++() {
      m_node = m_node->next;
      return *this;
    }
    bool operator!=(const iterator &other) const {
      return m_node != other.m_node;
    }
  };

  List() : m_head(nullptr), m_tail(nullptr), m_size(0) {}
  ~List() { /* TODO */ }

  void push_front(const T &value) { /* TODO */ }
  void push_back(const T &value) { /* TODO */ }
  void pop_front() { /* TODO */ }
  void pop_back() { /* TODO */ }
  void insert(iterator pos, const T &value) { /* TODO */ }
  void erase(iterator pos) { /* TODO */ }

  T &front() { return m_head->data; }
  T &back() { return m_tail->data; }
  size_t size() const { return m_size; }
  bool empty() const { return m_size == 0; }

  iterator begin() { return iterator(m_head); }
  iterator end() { return iterator(nullptr); }
};
