// https://www.acmicpc.net/problem/11382

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void P11382() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  unsigned long long a, b, c;
  std::cin >> a >> b >> c;
  std::cout << (a + b + c);
}