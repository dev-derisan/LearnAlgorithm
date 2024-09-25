// https://www.acmicpc.net/problem/2562

#include <algorithm>
#include <iostream>
#include <vector>

void P2562() {
  std::vector<int> vec(9);

  for (int i = 0; i < 9; ++i) {
    std::cin >> vec[i];
  }

  auto maxElem = std::max_element(vec.begin(), vec.end());
  std::cout << *maxElem << '\n' << (maxElem - vec.begin()) + 1;
}