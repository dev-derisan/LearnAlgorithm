// https://www.acmicpc.net/problem/2480

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

void P2480() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  std::array<int, 7> dices{};

  for (int i = 0; i < 3; ++i) {
    int temp;
    std::cin >> temp;
    ++dices[temp];
  }

  auto it = std::find(dices.begin(), dices.end(), 3);
  if (it != dices.end()) {
    std::cout << 10000 + (std::distance(dices.begin(), it) * 1000);
    return;
  }

  it = std::find(dices.begin(), dices.end(), 2);
  if (it != dices.end()) {
    std::cout << 1000 + (std::distance(dices.begin(), it) * 100);
    return;
  }
  
  it = std::find_if(dices.rbegin(), dices.rend(), [](const int num) {
         return num != 0;
       }).base();
  if (--it != dices.end()) {
    std::cout << std::distance(dices.begin(), it) * 100;
  }
}