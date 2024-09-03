// https://www.acmicpc.net/problem/11729

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <cmath>

void HanoiTower(int n, int from, int to, int via)
{
  if (n == 1)
  {
    printf("%d %d\n", from, to);
    return;
  }

  HanoiTower(n - 1, from, via, to);
  printf("%d %d\n", from, to);
  HanoiTower(n - 1, via, to, from);
}

void P11729()
{
  std::ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  int n = 0;
  scanf("%d", &n);
  printf("%d\n", static_cast<int>(pow(2, n)) - 1);
  HanoiTower(n, 1, 3, 2);
}