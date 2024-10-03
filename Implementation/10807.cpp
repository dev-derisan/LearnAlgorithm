// https://www.acmicpc.net/problem/10807

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

void P10807() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int n;
  std::cin >> n;
  std::vector<int> vec(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> vec[i];
  }
  int target;
  std::cin >> target;

  std::cout << std::count(vec.begin(), vec.end(), target);
}