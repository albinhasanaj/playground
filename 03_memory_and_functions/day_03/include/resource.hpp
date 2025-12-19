#pragma once
#include <cstdio>
#include <memory>
#include <string>

/**
 * RAII wrapper for file handles
 * Automatically closes file in destructor
 */
class FileHandle {
private:
  FILE *m_file;
  std::string m_path;

public:
  /**
   * @brief Opens file with given mode
   * @param path File path
   * @param mode fopen mode ("r", "w", "rb", etc.)
   */
  FileHandle(const std::string &path, const char *mode);

  /**
   * @brief Destructor closes file automatically
   */
  ~FileHandle();

  // Disable copying (unique ownership)
  FileHandle(const FileHandle &) = delete;
  FileHandle &operator=(const FileHandle &) = delete;

  // Enable moving
  FileHandle(FileHandle &&other) noexcept;
  FileHandle &operator=(FileHandle &&other) noexcept;

  bool isOpen() const;
  FILE *get() const;
  size_t read(void *buffer, size_t size);
  size_t write(const void *buffer, size_t size);
};

/**
 * RAII wrapper for dynamic memory buffer
 */
class Buffer {
private:
  std::unique_ptr<char[]> m_data;
  size_t m_size;

public:
  explicit Buffer(size_t size);

  char *data();
  const char *data() const;
  size_t size() const;

  void fill(char value);
  void resize(size_t newSize);
};

/**
 * Demonstrates unique_ptr usage
 */
void demonstrateUniquePtr();

/**
 * Demonstrates shared_ptr usage
 */
void demonstrateSharedPtr();

/**
 * Demonstrates weak_ptr usage
 */
void demonstrateWeakPtr();

/**
 * Shows RAII in action with exceptions
 */
void demonstrateExceptionSafety();
