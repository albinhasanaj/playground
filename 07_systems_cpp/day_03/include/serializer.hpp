#pragma once
#include <map>
#include <string>
#include <variant>
#include <vector>

using JsonValue = std::variant<std::nullptr_t, bool, int, double, std::string>;

class JsonObject {
  std::map<std::string, JsonValue> m_data;

public:
  void set(const std::string &key, JsonValue value);
  JsonValue get(const std::string &key) const;
  std::string serialize() const;
  static JsonObject parse(const std::string &json);
};

class BinarySerializer {
public:
  std::vector<char> serialize(const JsonObject &obj);
  JsonObject deserialize(const std::vector<char> &data);
};
