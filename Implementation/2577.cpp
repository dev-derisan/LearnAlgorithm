// https://www.acmicpc.net/problem/2577

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

void P2577() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int a, b, c;
  std::cin >> a >> b >> c;

  std::string mul = std::to_string(a * b * c);
  for (char ch = '0'; ch <= '9'; ++ch) {
    std::cout << std::count(mul.begin(), mul.end(), ch) << std::endl;
  }
}