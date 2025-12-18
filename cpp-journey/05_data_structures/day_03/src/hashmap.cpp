#include "hashmap.hpp"

template <typename K, typename V>
HashMap<K, V>::HashMap(size_t initialBuckets)
    : m_buckets(initialBuckets), m_size(0), m_maxLoadFactor(0.75f) {}

template <typename K, typename V>
size_t HashMap<K, V>::hash(const K &key) const {
  // TODO: Use std::hash<K>{}(key) % m_buckets.size()
  return 0;
}

template <typename K, typename V>
void HashMap<K, V>::insert(const K &key, const V &value) { /* TODO */ }

template <typename K, typename V>
V *HashMap<K, V>::find(const K &key) { /* TODO */
  return nullptr;
}

template <typename K, typename V>
bool HashMap<K, V>::contains(const K &key) const { /* TODO */
  return false;
}

template <typename K, typename V>
void HashMap<K, V>::erase(const K &key) { /* TODO */ }

template <typename K, typename V>
void HashMap<K, V>::rehash(size_t newBucketCount) { /* TODO */ }

template class HashMap<std::string, int>;
template class HashMap<int, std::string>;
