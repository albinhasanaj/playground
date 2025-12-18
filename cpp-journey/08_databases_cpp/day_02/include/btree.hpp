#pragma once
#include <optional>
#include <vector>

template <typename K, typename V, int ORDER = 4> class BTree {
  struct Node {
    std::vector<K> keys;
    std::vector<V> values;
    std::vector<Node *> children;
    bool isLeaf;
  };
  Node *m_root;

public:
  BTree();
  ~BTree();
  void insert(const K &key, const V &value);
  std::optional<V> search(const K &key);
  void remove(const K &key);
  void print();
};
