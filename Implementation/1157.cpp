// https://www.acmicpc.net/problem/1157

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

void P1157() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  std::string str;
  std::cin >> str;

  std::array<int, 26> alphabets{};
  for (const char ch : str) {
    ++alphabets[std::toupper(ch) - 'A'];
  }

  auto it = std::max_element(alphabets.begin(), alphabets.end());
  const size_t numMaxElements = std::count(alphabets.begin(), alphabets.end(), *it);
  if (numMaxElements == 1) {
    std::cout << static_cast<char>('A' + std::distance(alphabets.begin(), it));
  } else {
    std::cout << '?';
  }
}