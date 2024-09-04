// https://www.acmicpc.net/problem/2447

#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>

void DrawStar(std::vector<std::vector<char>>& board, int x, int y, int size) {
  if (size == 1) {
    board[x][y] = '*';
    return;
  }

  int nextSize = (size / 3);
  for (int i = 0; i < 3; ++i) {
    for (int j = 0; j < 3; ++j) {
      if (i == 1 && j == 1) {
        continue;
      }
      DrawStar(board, x + i * nextSize, y + j * nextSize, nextSize);
    }
  }
}

void P2447() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n{};
  std::cin >> n;

  std::vector<std::vector<char>> board(n, std::vector<char>(n, ' '));
  DrawStar(board, 0, 0, n);

  for (int i = 0; i < n; ++i) {
    for (int j = 0; j < n; ++j) {
      std::cout << board[i][j];
    }
    std::cout << "\n";
  }
}