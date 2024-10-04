// https://www.acmicpc.net/problem/5622

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

int GetSeconds(char ch) {
  switch (ch) {
    case 'A':
    case 'B':
    case 'C':
      return 3;
    case 'D':
    case 'E':
    case 'F':
      return 4;
    case 'G':
    case 'H':
    case 'I':
      return 5;
    case 'J':
    case 'K':
    case 'L':
      return 6;
    case 'M':
    case 'N':
    case 'O':
      return 7;
    case 'P':
    case 'Q':
    case 'R':
    case 'S':
      return 8;
    case 'T':
    case 'U':
    case 'V':
      return 9;
    default:
      return 10;
  }
}

void P5622() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  std::string word;
  std::cin >> word;

  int result = 0;
  for (const char ch : word) {
    result += GetSeconds(ch);
  }
  std::cout << result;
}