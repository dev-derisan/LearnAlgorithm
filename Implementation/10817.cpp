// https://www.acmicpc.net/problem/10817

#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>

constexpr int kNumIntegers = 3;

void P10817() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  std::array<int, kNumIntegers> arr = {};
  for (int i = 0; i < kNumIntegers; ++i) {
    std::cin >> arr[i];
  }

  std::sort(arr.begin(), arr.end());
  std::cout << arr[1];
}