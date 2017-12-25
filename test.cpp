#include <iostream>
#include <map>
#include <string>
#include <tuple>

void mapping(std::map<std::string, std::tuple<std::string, unsigned char>> &m, std::string key) { 
  static unsigned char num;
  try {
    std::string mode;
    unsigned char code;
    std::tie(mode, code) = m.at(key);
    std::cout << mode << std::endl << static_cast<int>(code) << std::endl;
  }
  catch(std::out_of_range&) {
    std::cout << "no key" << std::endl;
    m.insert(std::make_pair(key, std::make_tuple("lavel", num++)));
  }
}

int main() {
  std::map<std::string, std::tuple<std::string, unsigned char>> m;
  m.insert(std::make_pair("LD", std::make_tuple("nimonic", 0x01)));
  m.insert(std::make_pair("LDA", std::make_tuple("nimonic", 0x02)));
  m.insert(std::make_pair("ST", std::make_tuple("nimonic", 0x03)));

  mapping(m, "LD");
  mapping(m, "LDA");
  mapping(m, "ST");
  mapping(m, "Data");
  mapping(m, "Data");
  mapping(m, "Data1");
  mapping(m, "Data1");
  mapping(m, "Data2");
  mapping(m, "Data2");
  mapping(m, "Data3");
  mapping(m, "Data3");
  return 0;
}
