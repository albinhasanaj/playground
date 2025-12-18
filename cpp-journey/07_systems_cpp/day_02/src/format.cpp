#include "format.hpp"
#include <fstream>

void BinaryFormat::writeHeader(std::ostream &out,
                               const FileHeader &header) { /* TODO */ }
FileHeader BinaryFormat::readHeader(std::istream &in) { /* TODO */ return {}; }
void BinaryFormat::writeRecord(std::ostream &out,
                               const Record &record) { /* TODO */ }
Record BinaryFormat::readRecord(std::istream &in) { /* TODO */ return {}; }
void BinaryFormat::writeFile(const std::string &path,
                             const std::vector<Record> &records) { /* TODO */ }
std::vector<Record> BinaryFormat::readFile(const std::string &path) { /* TODO */
  return {};
}
