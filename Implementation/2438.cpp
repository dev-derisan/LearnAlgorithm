// https://www.acmicpc.net/problem/2438

#include <iostream>
#include <string>

void P2438() {
  int n;
  std::cin >> n;

  std::string star;
  star.reserve(n);
  for (int i = 0; i < n; ++i) {
    star.push_back('*');
    std::cout << star << std::endl;
  }
}