#pragma once
#include <functional>
#include <list>
#include <vector>

template <typename K, typename V> class Map {
  struct Entry {
    K key;
    V value;
  };
  std::vector<std::list<Entry>> m_buckets;
  size_t m_size;

  size_t hash(const K &key) const;
  void rehash();

public:
  Map(size_t buckets = 16);

  V &operator[](const K &key);
  void insert(const K &key, const V &value);
  void erase(const K &key);
  bool contains(const K &key) const;
  V *find(const K &key);

  size_t size() const;
  bool empty() const;
  void clear();
};
