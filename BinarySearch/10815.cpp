// https://www.acmicpc.net/problem/10815

#include <iostream>
#include <algorithm>
#include <vector>

void P10815()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  std::cin >> n;
  std::vector<int> sanguenCards(n);
  for (int i = 0; i < n; ++i)
  {
    std::cin >> sanguenCards[i];
  }

  std::sort(sanguenCards.begin(), sanguenCards.end());

  int m = 0;
  std::cin >> m;
  for (int i = 0; i < m; ++i)
  {
    int card;
    std::cin >> card;
    std::cout << (std::binary_search(sanguenCards.begin(), sanguenCards.end(), card)
                      ? 1
                      : 0)
              << " ";
  }
}
