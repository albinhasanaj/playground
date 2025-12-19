#pragma once
#include <string>
#include <vector>

enum class TokenType { IDENTIFIER, NUMBER, OPERATOR, KEYWORD, EOF_TOKEN };
struct Token {
  TokenType type;
  std::string value;
  int line;
};

class Lexer {
public:
  std::vector<Token> tokenize(const std::string &source);
};
