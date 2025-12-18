#pragma once
#include <string>
#include <vector>

std::string readTextFile(const std::string &path);
void writeTextFile(const std::string &path, const std::string &content);
std::vector<char> readBinaryFile(const std::string &path);
void writeBinaryFile(const std::string &path, const std::vector<char> &data);
bool fileExists(const std::string &path);
size_t fileSize(const std::string &path);
std::vector<std::string> readLines(const std::string &path);
