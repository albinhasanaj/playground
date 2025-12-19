#pragma once
#include <string>
#include <vector>

class SQLEngine {
public:
  void createTable(const std::string &name,
                   const std::vector<std::string> &columns);
  void insert(const std::string &table, const std::vector<std::string> &values);
  std::vector<std::vector<std::string>> select(const std::string &query);
  void execute(const std::string &sql);
};
