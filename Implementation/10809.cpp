// https://www.acmicpc.net/problem/10809

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void P10809() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  std::string str;
  std::cin >> str;

  for (char ch = 'a'; ch <= 'z'; ++ch) {
    auto pos = str.find_first_of(ch);
    if (pos == std::string::npos) {
      std::cout << -1 << ' ';
    } else {
      std::cout << pos << ' ';
    }
  }
}