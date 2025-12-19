#pragma once
#include <functional>
#include <list>
#include <string>
#include <vector>

template <typename K, typename V> class HashMap {
  std::vector<std::list<std::pair<K, V>>> m_buckets;
  size_t m_size;
  float m_maxLoadFactor;

  size_t hash(const K &key) const;
  void rehash(size_t newBucketCount);

public:
  HashMap(size_t initialBuckets = 16);
  void insert(const K &key, const V &value);
  V *find(const K &key);
  bool contains(const K &key) const;
  void erase(const K &key);
  size_t size() const;
  float loadFactor() const;
  V &operator[](const K &key);
};
