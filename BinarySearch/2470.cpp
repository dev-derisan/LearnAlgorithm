// https://www.acmicpc.net/problem/2470

#include <algorithm>
#include <iostream>
#include <numeric>
#include <vector>

void P2470() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n{};
  std::cin >> n;

  std::vector<int> solutions(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> solutions[i];
  }

  std::sort(solutions.begin(), solutions.end());
  std::pair<int, int> result{solutions[0], solutions[1]};

  for (int i = 0; i < n; ++i) {
    int left = i + 1;
    int right = n - 1;

    while (left <= right) {
      int mid = (left + right) / 2;

      int sum = solutions[mid] + solutions[i];
      if (sum < 0) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }

      if (abs(sum) < abs(result.first + result.second)) {
        result.first = solutions[i];
        result.second = solutions[mid];
      }
    }
  }

  std::cout << result.first << " " << result.second;
}

void P2470UsingTwoPointers() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n{};
  std::cin >> n;

  std::vector<int> solutions(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> solutions[i];
  }

  std::sort(solutions.begin(), solutions.end());

  int left = 0;
  int right = n - 1;
  int bestLeft = left;
  int bestRight = right;
  int closestSum = std::abs(solutions[bestLeft] + solutions[bestRight]);

  while (left < right) {
    int sum = solutions[left] + solutions[right];

    if (std::abs(sum) < closestSum) {
      closestSum = std::abs(sum);
      bestLeft = left;
      bestRight = right;
    }

    if (sum == 0) {
      break;
    }

    if (sum < 0) {
      ++left;
    }
    else {
      --right;
    }
  }

  std::cout << solutions[bestLeft] << " " << solutions[bestRight];
}