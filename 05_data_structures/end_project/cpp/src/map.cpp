#include "map.hpp"
#include <string>

template <typename K, typename V>
Map<K, V>::Map(size_t buckets) : m_buckets(buckets), m_size(0) {}
template <typename K, typename V>
size_t Map<K, V>::hash(const K &key) const { /* TODO */
  return 0;
}
template <typename K, typename V>
V &Map<K, V>::operator[](const K &key) { /* TODO */
  static V v;
  return v;
}
template <typename K, typename V>
void Map<K, V>::insert(const K &key, const V &value) { /* TODO */ }
template <typename K, typename V>
void Map<K, V>::erase(const K &key) { /* TODO */ }
template <typename K, typename V>
bool Map<K, V>::contains(const K &key) const { /* TODO */
  return false;
}
template <typename K, typename V> size_t Map<K, V>::size() const {
  return m_size;
}

template class Map<std::string, int>;
template class Map<int, std::string>;
