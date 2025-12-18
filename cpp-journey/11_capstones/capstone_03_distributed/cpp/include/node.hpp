#pragma once
#include <string>
#include <vector>

class NetworkNode {
public:
  void start(int port);
  void connect(const std::string &host, int port);
  void send(const std::vector<char> &data);
  std::vector<char> receive();
  void stop();
};
