// https://www.acmicpc.net/problem/10250

#include <algorithm>
#include <array>
#include <iomanip>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>

void P10250() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int t;
  std::cin >> t;

  for (int i = 0; i < t; ++i) {
    int h, w, n;
    std::cin >> h >> w >> n;
    --n;

    int floor = (n % h) + 1;
    int roomNumber = n / h + 1;

    std::cout << floor;
    std::cout << std::setfill('0') << std::setw(2) << roomNumber << std::endl;
  }
}