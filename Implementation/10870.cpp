// https://www.acmicpc.net/problem/10870

#include <algorithm>
#include <array>
#include <iostream>
#include <numeric>
#include <string>
#include <unordered_map>
#include <vector>

std::unordered_map<int, long long> fiboDict;

long long GetFibo(int n) {
  if (n == 0 || n == 1) {
    return n;
  }

  auto it = fiboDict.find(n);
  if (it != fiboDict.end()) {
    return it->second;
  } else {
    long long fibo = GetFibo(n - 1) + GetFibo(n - 2);
    fiboDict.emplace(n, fibo);
    return fibo;
  }
}

void P10870() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int n;
  std::cin >> n;

  std::cout << GetFibo(n);
}