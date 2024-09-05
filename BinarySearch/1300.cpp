// https://www.acmicpc.net/problem/1300

#include <algorithm>
#include <iostream>
#include <vector>

void P1300() {
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  long long n{}, k{};
  std::cin >> n >> k;

  long long left = 1;
  long long right = (n * n);

  while (left <= right) {
    long long mid = (left + right) / 2;
    long long count = 0;

    for (int i = 1; i <= n; ++i) {
      count += std::min<long long>(n, mid / i);
    }

    if (count < k) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  std::cout << left;
}
