#include "btree.hpp"
template <typename K, typename V, int ORDER>
BTree<K, V, ORDER>::BTree() : m_root(nullptr) {}

template <typename K, typename V, int ORDER>
void BTree<K, V, ORDER>::insert(const K &key, const V &value) { /* TODO */ }

template <typename K, typename V, int ORDER>
std::optional<V> BTree<K, V, ORDER>::search(const K &key) { /* TODO */
  return std::nullopt;
}

template class BTree<int, int>;
