// https://www.acmicpc.net/problem/25304

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

void P25304() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  long long x;
  std::cin >> x;

  int n;
  std::cin >> n;

  long long totalPrice = 0;
  for (int i = 0; i < n; ++i) {
    int price;
    int count;
    std::cin >> price >> count;
    totalPrice += (price * count);
  }

  if (x == totalPrice) {
    std::cout << "Yes";
  } else {
    std::cout << "No";
  }
}
