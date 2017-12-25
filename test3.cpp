#include <iostream>
#include <string>

uint16_t ad2u8(std::string &address) {
  int radix = 10;
  if (address[0] == '#') {
    address.erase(0, 1);
    radix = 16;
  }
  try {
    return std::stoi(address.c_str(), nullptr, radix);
  }
  catch (std::invalid_argument&) {
    std::cerr << "error" << std::endl;
    return 0;
  }
}

int main() {
  std::string a("#000f");
  std::string b("#0001");
  std::string c("1");
  std::string d("-1");
  std::string f("f");
  std::string g("#ffff");
  std::string h("#FFFF");
  std::cout << a << ' ' << static_cast<int>(ad2u8(a)) << std::endl;
  std::cout << b << ' ' << static_cast<int>(ad2u8(b)) << std::endl;
  std::cout << c << ' ' << static_cast<int>(ad2u8(c)) << std::endl;
  std::cout << d << ' ' << static_cast<int>(ad2u8(d)) << std::endl;
  std::cout << f << ' ' << static_cast<int>(ad2u8(f)) << std::endl;
  std::cout << g << ' ' << static_cast<int>(ad2u8(g)) << std::endl;
  std::cout << h << ' ' << static_cast<int>(ad2u8(h)) << std::endl;
  
  return 0;
}
