// https://www.acmicpc.net/problem/10952

#include <algorithm>
#include <iostream>
#include <vector>

void P10952() {
  int a, b;

  do {
    std::cin >> a >> b;

    const int sum = (a + b);
    if (sum != 0) {
      std::cout << sum << std::endl;
    }

  } while (a != 0 && b != 0);
}