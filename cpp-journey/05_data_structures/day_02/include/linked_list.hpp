#pragma once

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
  DoublyLinkedList();
  ~DoublyLinkedList();
  void push_front(const T &value);
  void push_back(const T &value);
  void pop_front();
  void pop_back();
  T &front();
  T &back();
  size_t size() const;
};
