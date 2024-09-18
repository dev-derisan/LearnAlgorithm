// https://www.acmicpc.net/problem/2143

#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>
#include <vector>

void P2143() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 0;
  std::cin >> t;

  int n = 0;
  std::cin >> n;
  std::vector<int> vecA(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> vecA[i];
  }

  int m = 0;
  std::cin >> m;
  std::vector<int> vecB(m);
  for (int i = 0; i < m; ++i) {
    std::cin >> vecB[i];
  }

  std::vector<int> subA;
  subA.reserve(n * n);

  for (int i = 0; i < n; ++i) {
    int sum = 0;
    for (int j = i; j < n; ++j) {
      sum += vecA[j];
      subA.push_back(sum);
    }
  }

  std::vector<int> subB;
  subA.reserve(m * m);

  for (int i = 0; i < m; ++i) {
    int sum = 0;
    for (int j = i; j < m; ++j) {
      sum += vecB[j];
      subB.push_back(sum);
    }
  }

  std::sort(subB.begin(), subB.end());

  size_t result = 0;

  for (const int sub : subA) {
    int target = (t - sub);
    auto pr = std::equal_range(subB.begin(), subB.end(), target);
    result += (pr.second - pr.first);
  }

  std::cout << result;
}
