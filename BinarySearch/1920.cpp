// https://www.acmicpc.net/problem/1920

#include <cstdio>
#include <algorithm>

int ns[100'000];
int ms[100'000];

void foo()
{
  int n = 0;
  scanf("%d", &n);

  for (int i = 0; i < n; ++i)
  {
    scanf("%d", &ns[i]);
  }

  int m = 0;
  scanf("%d", &m);

  for (int i = 0; i < m; ++i)
  {
    scanf("%d", &ms[i]);
  }

  std::sort(std::begin(ns), std::begin(ns) + n);

  for (int i = 0; i < m; ++i)
  {
    const bool find = std::binary_search(std::begin(ns), std::begin(ns) + n, ms[i]);
    printf("%d\n", find ? 1 : 0);
  }
}