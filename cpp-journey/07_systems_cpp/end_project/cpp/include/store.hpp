#pragma once
#include <optional>
#include <string>

class KeyValueStore {
public:
  void open(const std::string &path);
  void close();
  void put(const std::string &key, const std::string &value);
  std::optional<std::string> get(const std::string &key);
  void remove(const std::string &key);
  bool exists(const std::string &key);
  void flush();
};
