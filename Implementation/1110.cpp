// https://www.acmicpc.net/problem/1110

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

int MakeNewNumber(int number) {
  int digitOfOne = number % 10;
  int sum = number / 10 + digitOfOne;
  int sumDigitOfOne = sum % 10;
  return digitOfOne * 10 + sumDigitOfOne;
}

void P1110() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int n;
  std::cin >> n;

  int count = 0;
  int temp = n;
  do {
    temp = MakeNewNumber(temp);
    ++count;
  } while (n != temp);

  std::cout << count;
}