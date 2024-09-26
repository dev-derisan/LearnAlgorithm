// https://www.acmicpc.net/problem/11720

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void P11720() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int n;
  std::cin >> n;

  std::string input;
  std::cin >> input;

  int sum = 0;
  for (char ch : input) {
    sum += ch - '0';
  }

  std::cout << sum;
}