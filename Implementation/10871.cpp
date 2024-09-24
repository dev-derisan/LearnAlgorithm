// https://www.acmicpc.net/problem/10871

#include <iostream>
#include <vector>
#include <algorithm>

void P10871() {
  int n, x;
  std::cin >> n >> x;

  std::vector<int> vec(n);
  for (int i = 0; i < n; ++i)
  {
    std::cin >> vec[i];
  }

  for (const int num : vec)
  {
    if (num < x)
    {
      std::cout << num << ' ';
    }
  }
}