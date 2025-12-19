#pragma once
#include <cstddef>

class PoolAllocator {
  void *m_pool;
  size_t m_blockSize;
  size_t m_poolSize;
  void *m_freeList;

public:
  PoolAllocator(size_t blockSize, size_t numBlocks);
  ~PoolAllocator();
  void *allocate();
  void deallocate(void *ptr);
};

class ArenaAllocator {
  char *m_buffer;
  size_t m_size;
  size_t m_offset;

public:
  ArenaAllocator(size_t size);
  ~ArenaAllocator();
  void *allocate(size_t size, size_t alignment = 8);
  void reset();
};
