#pragma once
#include "lexer.hpp"
#include <memory>

struct ASTNode {
  virtual ~ASTNode() = default;
};
struct BinaryExpr : ASTNode {
  std::unique_ptr<ASTNode> left, right;
  std::string op;
};

class Parser {
public:
  std::unique_ptr<ASTNode> parse(const std::vector<Token> &tokens);
};
