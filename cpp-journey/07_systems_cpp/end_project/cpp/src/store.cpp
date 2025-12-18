#include "store.hpp"
void KeyValueStore::open(const std::string &path) { /* TODO */ }
void KeyValueStore::close() { /* TODO */ }
void KeyValueStore::put(const std::string &key,
                        const std::string &value) { /* TODO */ }
std::optional<std::string>
KeyValueStore::get(const std::string &key) { /* TODO */
  return std::nullopt;
}
void KeyValueStore::remove(const std::string &key) { /* TODO */ }
bool KeyValueStore::exists(const std::string &key) { /* TODO */ return false; }
void KeyValueStore::flush() { /* TODO */ }
