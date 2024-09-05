// https://www.acmicpc.net/problem/2467

#include <algorithm>
#include <iostream>
#include <vector>

void P2467() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n{};
  std::cin >> n;

  std::vector<int> solutions(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> solutions[i];
  }

  int left = 0;
  int right = (n - 1);
  int bestLeft = left;
  int bestRight = right;

  while (left < right) {
    int sum = solutions[left] + solutions[right];

    if (std::abs(sum) 
      < std::abs(solutions[bestLeft] + solutions[bestRight])) {
      bestLeft = left;
      bestRight = right;
    }

    if (sum == 0) {
      break;
    }

    if (sum < 0) {
      ++left;
    } else {
      --right;
    }
  }

  std::cout << solutions[bestLeft] << " " << solutions[bestRight];
}
