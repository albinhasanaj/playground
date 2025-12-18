#pragma once

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
    T &operator*();
    iterator &operator++();
    bool operator!=(const iterator &other) const;
  };

  List();
  ~List();

  void push_front(const T &value);
  void push_back(const T &value);
  void pop_front();
  void pop_back();
  void insert(iterator pos, const T &value);
  void erase(iterator pos);

  T &front();
  T &back();
  size_t size() const;
  bool empty() const;

  iterator begin();
  iterator end();
};
