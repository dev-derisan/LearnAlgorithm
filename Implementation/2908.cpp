// https://www.acmicpc.net/problem/2908

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

void P2908() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int a, b;
  std::cin >> a >> b;

  const int newA = (a % 10) * 100 + (a % 100 / 10) * 10 + (a / 100);
  const int newB = (b % 10) * 100 + (b % 100 / 10) * 10 + (b / 100);
  std::cout << std::max(newA, newB);
}