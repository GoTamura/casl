#include <iostream>
#include <string>
#include <map>
#include <unordered_map>
#include <sstream>

int main() {
  std::unordered_map<std::string, int> m;
  std::string s("abc,def,ghi");
  for (auto pos = s.find(","); pos != std::string::npos; pos = s.find(","))
    s.replace(pos, 1, " ");
  std::istringstream iss(s);
  int c = 0;
  while (!iss.eof()) {
    std::string i;
    iss >> i;
    m.insert(std::make_pair(i, c++));
  }
  for (auto x : m)
    std::cout << x.first << ',' << x.second << std::endl;

  return 0;
}
