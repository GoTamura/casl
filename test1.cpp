#include <iostream>
#include <map>
#include <string>
#include <sstream>
#include <vector>

int main(int argc, char *argv[]) {
  std::map<std::string, unsigned char> m {
    {"LD", 0x10},
    {"ST", 0x11},
    {"LAD", 0x12},
    {"LDr", 0x14}
  };
  std::string s(argv[1]);
  std::istringstream iss(s);
  std::vector<std::string> vs;
  while (!iss.eof()) {
    std::string token;
    vs.push_back(token);
  }

  for (auto x: vs) {
    std::cout << x << std::endl;
  }


  std::cout << s << std::endl;
  return 0;
}
