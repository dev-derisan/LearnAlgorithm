// https://www.acmicpc.net/problem/2805

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

void P2805()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n, m;

  std::cin >> n >> m;

  std::vector<int> trees(n);
  for (int i = 0; i < n; ++i)
  {
    std::cin >> trees[i];
  }

  std::sort(std::begin(trees), std::end(trees));

  int low = 0;
  int high = *std::max_element(std::begin(trees), std::end(trees));
  int maxHeight = 0;

  while (low <= high)
  {
    int mid = (low + high) / 2;

    long long sum = 0;
    for (auto it = std::lower_bound(std::begin(trees), std::end(trees), mid);
      it != std::end(trees);
      ++it)
    {
      sum += (*it) - mid;
    }

    if (sum >= m)
    {
      maxHeight = std::max(maxHeight, mid);
      low = (mid + 1);
    }
    else
    {
      high = (mid - 1);
    }
  }

  std::cout << maxHeight;
}