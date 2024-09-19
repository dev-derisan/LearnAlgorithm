// https://www.acmicpc.net/problem/2776

#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>
#include <vector>

void P2776() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int t = 0;
  std::cin >> t;

  for (int i = 0; i < t; ++i) {
    int n = 0;
    std::cin >> n;

    std::vector<int> note1(n);
    for (int idx = 0; idx < n; ++idx) {
      std::cin >> note1[idx];
    }

    int m = 0;
    std::cin >> m;
    std::vector<int> note2(m);
    for (int idx = 0; idx < m; ++idx) {
      std::cin >> note2[idx];
    }

    std::sort(note1.begin(), note1.end());

    for (const int num : note2) {
      if (std::binary_search(note1.begin(), note1.end(), num)) {
        std::cout << 1 << '\n';
      } else {
        std::cout << 0 << '\n';
      }
    }
  }
}
