#pragma once
#include <cstdint>
#include <string>
#include <vector>

#pragma pack(push, 1)
struct FileHeader {
  uint32_t magic;       // Magic number for file type
  uint16_t version;     // Format version
  uint32_t recordCount; // Number of records
  uint32_t dataOffset;  // Offset to data section
};

struct Record {
  uint32_t id;
  char name[32];
  double value;
  uint64_t timestamp;
};
#pragma pack(pop)

class BinaryFormat {
public:
  void writeHeader(std::ostream &out, const FileHeader &header);
  FileHeader readHeader(std::istream &in);
  void writeRecord(std::ostream &out, const Record &record);
  Record readRecord(std::istream &in);
  void writeFile(const std::string &path, const std::vector<Record> &records);
  std::vector<Record> readFile(const std::string &path);
};
