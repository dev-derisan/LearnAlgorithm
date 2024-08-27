// https://www.acmicpc.net/problem/10816

#include <iostream>
#include <algorithm>
#include <vector>

void P10816()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;

  std::vector<int> cardsOwnedBySanguen(n);
  for (int i = 0; i < n; ++i)
  {
    std::cin >> cardsOwnedBySanguen[i];
  }

  int m = 0;
  std::cin >> m;

  std::vector<int> cardsToCount(m);
  for (int i = 0; i < m; ++i)
  {
    std::cin >> cardsToCount[i];
  }

  std::sort(std::begin(cardsOwnedBySanguen), std::end(cardsOwnedBySanguen));

  for (const int card : cardsToCount)
  {
    // 1. Using `std::lower_bound` and 'std::upper_bound'
    //auto lowerBound = std::lower_bound(std::begin(cardsOwnedBySanguen), std::end(cardsOwnedBySanguen), card);
    //auto upperBound = std::upper_bound(std::begin(cardsOwnedBySanguen), std::end(cardsOwnedBySanguen), card);
    //std::cout << std::distance(lowerBound, upperBound) << " ";

    // 2. Using 'std::equal_range'
    const auto bounds = std::equal_range(std::begin(cardsOwnedBySanguen), std::end(cardsOwnedBySanguen), card);
    std::cout << (bounds.second - bounds.first) << " ";
  }
}
