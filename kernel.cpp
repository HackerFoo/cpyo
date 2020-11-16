#include <iostream>
#include <fstream>
#include <string>

// External Interface
extern "C" {
  bool get_data(const char *name, char *buffer, size_t size);
}

bool get_data(const char *name, char *buffer, size_t size) {
  std::fstream s(std::string(name), s.in);
  if(!s.is_open()) return false;
  s.read(buffer, size);
  return true;
}
