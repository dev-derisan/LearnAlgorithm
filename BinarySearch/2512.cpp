// https://www.acmicpc.net/problem/2512

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

void P2512()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  std::vector<int> requests(n);
  for (int i = 0; i < n; ++i)
  {
    std::cin >> requests[i];
  }

  int totalBudget = 0;
  std::cin >> totalBudget;

  int reqSum = std::accumulate(requests.begin(), requests.end(), 0);
  const int maxBudget = *std::max_element(requests.begin(), requests.end());

  if (reqSum <= totalBudget)
  {
    std::cout << maxBudget;
    return;
  }

  int low = 1;
  int high = maxBudget;
  int result = 0;

  while (low <= high)
  {
    int mid = (low + high) / 2;
    int currentSum = 0;

    for (const int budget : requests)
    {
      currentSum += std::clamp(budget, 1, mid);
    }

    if (currentSum <= totalBudget)
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