// https://www.acmicpc.net/problem/2439

#include <iostream>
#include <string>

void P2439() {
  int n;
  std::cin >> n;

  std::string stars(n, ' ');
  for (int i = 0; i < n; ++i)
  {
    stars[n - i - 1] = '*';
    std::cout << stars << std::endl;
  }
}