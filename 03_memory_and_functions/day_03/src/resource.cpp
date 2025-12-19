#include "resource.hpp"
#include <iostream>
#include <stdexcept>

// === FileHandle Implementation ===

FileHandle::FileHandle(const std::string &path, const char *mode)
    : m_file(nullptr), m_path(path) {
  // TODO: Open file using fopen
  // m_file = fopen(path.c_str(), mode);
  // TODO: Optionally throw if open fails
}

FileHandle::~FileHandle() {
  // TODO: Close file if open
  // if (m_file) fclose(m_file);
  // std::cout << "FileHandle closed: " << m_path << std::endl;
}

FileHandle::FileHandle(FileHandle &&other) noexcept
    : m_file(other.m_file), m_path(std::move(other.m_path)) {
  // TODO: Transfer ownership, null out other
  // other.m_file = nullptr;
}

FileHandle &FileHandle::operator=(FileHandle &&other) noexcept {
  // TODO: Close current file if any
  // TODO: Transfer ownership from other
  return *this;
}

bool FileHandle::isOpen() const {
  // TODO: Return m_file != nullptr
  return false;
}

FILE *FileHandle::get() const {
  // TODO: Return m_file
  return nullptr;
}

size_t FileHandle::read(void *buffer, size_t size) {
  // TODO: Call fread
  return 0;
}

size_t FileHandle::write(const void *buffer, size_t size) {
  // TODO: Call fwrite
  return 0;
}

// === Buffer Implementation ===

Buffer::Buffer(size_t size) : m_size(size) {
  // TODO: Allocate using make_unique
  // m_data = std::make_unique<char[]>(size);
}

char *Buffer::data() {
  // TODO: Return m_data.get()
  return nullptr;
}

const char *Buffer::data() const {
  // TODO: Return m_data.get()
  return nullptr;
}

size_t Buffer::size() const {
  // TODO: Return m_size
  return 0;
}

void Buffer::fill(char value) {
  // TODO: Fill buffer with value
  // std::fill(m_data.get(), m_data.get() + m_size, value);
}

void Buffer::resize(size_t newSize) {
  // TODO: Allocate new, copy old, replace
}

// === Smart Pointer Demonstrations ===

void demonstrateUniquePtr() {
  // TODO: Create unique_ptr with make_unique
  // auto ptr = std::make_unique<int>(42);

  // TODO: Show move semantics
  // auto ptr2 = std::move(ptr);  // ptr is now nullptr

  // TODO: Show that copies don't compile
  // auto ptr3 = ptr2;  // ERROR!
}

void demonstrateSharedPtr() {
  // TODO: Create shared_ptr
  // auto ptr1 = std::make_shared<int>(42);

  // TODO: Copy (share ownership)
  // auto ptr2 = ptr1;

  // TODO: Show reference count
  // std::cout << "Use count: " << ptr1.use_count() << std::endl;
}

void demonstrateWeakPtr() {
  // TODO: Create shared_ptr and weak_ptr
  // auto shared = std::make_shared<int>(42);
  // std::weak_ptr<int> weak = shared;

  // TODO: Lock weak_ptr to get shared_ptr
  // if (auto locked = weak.lock()) { use *locked }
}

void demonstrateExceptionSafety() {
  // TODO: Show that RAII handles exceptions properly
  // try {
  //     FileHandle file("test.txt", "w");
  //     // ... some code that throws ...
  //     throw std::runtime_error("Error!");
  // } catch (...) { }
  // File is still properly closed due to RAII!
}
