// https://www.acmicpc.net/problem/15552

#include <algorithm>
#include <iostream>
#include <vector>

void P15552() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int t;
  std::cin >> t;

  for (int i = 0; i < t; ++i) {
    int a, b;
    std::cin >> a >> b;
    std::cout << a + b << '\n';
  }
}