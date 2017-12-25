#include <iostream>
#include <string>
#include <sstream>

int main() {
  std::string s("abc def ghi\njkl mno pqr");
  std::cout << s << std::endl;
  std::istringstream iss(s);
  std::string tmp;
  auto tellg1 = iss.tellg();
  auto tellg2 = iss.tellg();
  while(!iss.eof()) {
    iss >> tmp;
    if (tmp == "def")
      s.erase(tellg2, tellg1 - tellg2);
    tellg2 = tellg1;
    tellg1 = iss.tellg();
  }
  std::cout << s << std::endl;
  return 0;
}

