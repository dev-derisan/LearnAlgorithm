// https://www.acmicpc.net/problem/3003

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

void P3003() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  std::array<int, 6> correctPieces = {1, 1, 2, 2, 2, 8};
  std::array<int, 6> pieces = {};

  for (int i = 0; i < pieces.size(); ++i) {
    std::cin >> pieces[i];
  }

  for (int i = 0; i < pieces.size(); ++i) {
    std::cout << correctPieces[i] - pieces[i] << ' ';
  }
}