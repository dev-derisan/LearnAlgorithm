// https://www.acmicpc.net/problem/2110

#include <iostream>
#include <algorithm>
#include <vector>

void P2110()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n, k;
  std::cin >> n >> k;

  std::vector<int> houses(n);
  for (int i = 0; i < n; ++i) 
  {
    std::cin >> houses[i];
  }

  std::sort(houses.begin(), houses.end());

  int low = 1;
  int high = (houses.back() - houses.front());
  int result = 0;

  while (low <= high) 
  {
    int mid = (low + high) / 2;

    int numInstalled = 1;
    int lastInstalledHouse = houses[0];

    for (int i = 1; i < n; ++i)
    {
      if (houses[i] - lastInstalledHouse >= mid)
      {
        ++numInstalled;
        lastInstalledHouse = houses[i];
      }
    }

    if (numInstalled >= k)
    {
      low = mid + 1;
      result = mid;
    }
    else
    {
      high = mid - 1;
    }
  }

  std::cout << result;
}