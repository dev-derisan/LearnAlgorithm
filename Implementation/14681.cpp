// https://www.acmicpc.net/problem/14681

#include <iostream>

void P14681() {
  int x, y;
  std::cin >> x >> y;

  const bool IsXNegative = (x < 0);
  const bool IsYNegative = (y < 0);

  if (IsXNegative) {
    if (IsYNegative) {
      std::cout << 3;
    } else {
      std::cout << 2;
    }
  } else {
    if (IsYNegative) {
      std::cout << 4;
    } else {
      std::cout << 1;
    }
  }
}