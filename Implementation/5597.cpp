// https://www.acmicpc.net/problem/5597

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

void P5597() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  std::array<int, 31> arr = {};
  for (int i = 0; i < 28; ++i) {
    int num;
    std::cin >> num;
    ++arr[num];
  }

  for (int i = 1; i < arr.size(); ++i)
  {
    if (arr[i] == 0) {
      std::cout << i << std::endl;
    }
  }
}