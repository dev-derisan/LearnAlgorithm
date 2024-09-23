// https://www.acmicpc.net/problem/10869

#include <iostream>

void P10869() {
  int a, b;
  std::cin >> a >> b;
  std::cout << a + b << '\n' << a - b << '\n' << a * b << '\n' << a / b << '\n'
    << a % b;
}