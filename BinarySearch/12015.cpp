// https://www.acmicpc.net/problem/12015

#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>

void P12015()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  std::vector<int> nums(n);

  for (int i = 0; i < n; ++i)
  {
    std::cin >> nums[i];
  }

  std::vector<int> x;

  for (int i = 0; i < nums.size(); ++i)
  {
    auto it = std::lower_bound(x.begin(), x.end(), nums[i]);

    if (it == x.end())
    {
      x.push_back(nums[i]);
    }
    else
    {
      *it = nums[i];
    }
  }

  std::cout << x.size();
}

// using dp
void P12015_DP()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n;
  std::cin >> n;

  std::vector<int> nums(n);

  for (int i = 0; i < n; ++i)
  {
    std::cin >> nums[i];
  }

  std::vector<int> dp(n, 1);
  for (int i = 1; i < dp.size(); ++i)
  {
    for (int j = 0; j < i; ++j)
    {
      if (nums[j] < nums[i])
      {
        dp[i] = std::max(dp[i], dp[j] + 1);
      }
    }
  }

  std::cout << *std::max_element(dp.begin(), dp.end());
}