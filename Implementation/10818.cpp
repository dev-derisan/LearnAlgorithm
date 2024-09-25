// https://www.acmicpc.net/problem/10818

#include <algorithm>
#include <iostream>
#include <vector>

void P10818() {
  int n;
  std::cin >> n;

  std::vector<int> vec(n);

  for (int i = 0; i < n; ++i) {
    std::cin >> vec[i];
  }

  auto pr = std::minmax_element(vec.begin(), vec.end());
  std::cout << *pr.first << ' ' << *pr.second;
}