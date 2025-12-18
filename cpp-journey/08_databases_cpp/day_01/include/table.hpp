#pragma once
#include <string>
#include <variant>
#include <vector>

using ColumnValue = std::variant<int, double, std::string>;

struct Row {
  std::vector<ColumnValue> values;
};

struct Column {
  std::string name;
  enum Type { INT, DOUBLE, STRING } type;
};

class Table {
  std::vector<Column> m_schema;
  std::vector<Row> m_rows;

public:
  void defineSchema(const std::vector<Column> &columns);
  void insertRow(const Row &row);
  Row getRow(size_t index);
  std::vector<Row> scan();
  void deleteRow(size_t index);
};
