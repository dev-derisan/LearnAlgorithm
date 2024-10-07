// https://www.acmicpc.net/problem/10988

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

bool IsPalindrome(const std::string& str) {
  for (size_t i = 0; i < str.size() / 2; ++i) {
    if (str[i] != str[str.size() - 1 - i]) {
      return false;
    }
  }
  return true;
}

void P10988() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  std::string str;
  std::cin >> str;

  if (IsPalindrome(str)) {
    std::cout << 1;
  } else {
    std::cout << 0;
  }
}