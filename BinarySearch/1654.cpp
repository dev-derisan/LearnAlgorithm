// https://www.acmicpc.net/problem/1654

#include <iostream>
#include <algorithm>
#include <vector>

void P1654()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int k = 0, n = 0;
  std::cin >> k >> n;

  std::vector<int> cables(k);
  for (int i = 0; i < k; ++i)
  {
    std::cin >> cables[i];
  }

  long long low = 0;
  long long high = *std::max_element(cables.begin(), cables.end());
  long long maxCableLength = 0;

  while (low <= high)
  {
    long long mid = (low + high) / 2;

    long long count = 0;
    for (const int cable : cables)
    {
      count += (cable / mid);
    }

    if (count >= n)
    {
      maxCableLength = mid;
      low = mid + 1;
    }
    else
    {
      high = mid - 1;
    }
  }

  std::cout << maxCableLength;
}
