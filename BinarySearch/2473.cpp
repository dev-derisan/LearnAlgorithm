// https://www.acmicpc.net/problem/2473

#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>
#include <vector>

void P2473() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  std::vector<long long> solutions(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> solutions[i];
  }

  std::sort(solutions.begin(), solutions.end());

  std::array<long long, 3> bests{solutions[0], solutions[1], solutions[2]};
  long long bestSum = std::accumulate(bests.begin(), bests.end(), 0LL);

  for (int i = 0; i < n - 2; ++i) {
    int left = i + 1;
    int right = n - 1;

    while (left < right) {
      // vector의 element의 type이 int라면 (a+b)의 임시 객체에 오버플로우가 발생할 가능성이 있음.
      long long sum = (solutions[i] + solutions[left] + solutions[right]);

      if (sum == 0) {
        bests[0] = solutions[i];
        bests[1] = solutions[left];
        bests[2] = solutions[right];
        break;
      }

      if (std::abs(sum) < std::abs(bestSum)) {
        bestSum = sum;
        bests[0] = solutions[i];
        bests[1] = solutions[left];
        bests[2] = solutions[right];
      }

      if (sum < 0) {
        ++left;
      } else {
        --right;
      }
    }
  }

  for (const long long sol : bests) {
    std::cout << sol << ' ';
  }
}
