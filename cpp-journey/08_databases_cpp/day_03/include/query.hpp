#pragma once
#include <string>
#include <vector>

struct Query {
  enum Type { SELECT, INSERT, DELETE } type;
  std::string table;
  std::vector<std::string> columns;
  std::string whereClause;
};

Query parseSQL(const std::string &sql);
