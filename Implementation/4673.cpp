// https://www.acmicpc.net/problem/4673

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

int GetNextNumber(int num) {
  int result = num;

  for (int i = 0; i < 5; ++i) {
    result += (num % 10);
    num /= 10;
  }

  return result;
}

std::array<int, 10001> dict = {};

void P4673() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  for (int i = 1; i <= 10000; ++i) {
    int n = GetNextNumber(i);
    if (n <= 10000) {
      ++dict[n];
    }
  }

  for (int i = 1; i <= 10000; ++i) {
    if (dict[i] == 0) {
      std::cout << i << std::endl;
    }
  }
}