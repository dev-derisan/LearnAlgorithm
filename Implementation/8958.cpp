// https://www.acmicpc.net/problem/8958

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

void P8958() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int t;
  std::cin >> t;

  for (int i = 0; i < t; ++i) {
    std::string str;
    std::cin >> str;

    int seq = 0;
    int score = 0;
    for (const char ch : str) {
      if (ch == 'O') {
        ++seq;
      } else {
        seq = 0;
      }
      score += seq;
    }

    std::cout << score << '\n';
  }
}