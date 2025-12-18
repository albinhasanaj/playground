#include "file_utils.hpp"
#include <fstream>
#include <sstream>

std::string readTextFile(const std::string &path) {
  // TODO: Open file, read all content, return string
  return "";
}

void writeTextFile(const std::string &path, const std::string &content) {
  // TODO: Open file, write content
}

std::vector<char> readBinaryFile(const std::string &path) {
  // TODO: Open in binary mode, read bytes
  return {};
}

void writeBinaryFile(const std::string &path, const std::vector<char> &data) {
  // TODO: Open in binary mode, write bytes
}

bool fileExists(const std::string &path) {
  // TODO: Check if file exists
  return false;
}

size_t fileSize(const std::string &path) {
  // TODO: Get file size
  return 0;
}

std::vector<std::string> readLines(const std::string &path) {
  // TODO: Read file line by line
  return {};
}
