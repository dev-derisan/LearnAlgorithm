// https://www.acmicpc.net/problem/10872

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>

long long CalcFactorial(int n) {
  if (n <= 1) {
    return 1;
  }

  return n * CalcFactorial(n - 1);
}

void P10872() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int a;
  std::cin >> a;

  std::cout << CalcFactorial(a);
}