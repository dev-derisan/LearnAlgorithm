// https://www.acmicpc.net/problem/1152

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

void P1152() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  std::string str;
  std::getline(std::cin, str);

  if (str.empty() || (str.size() == 1 && str.front() == ' ')) {
    std::cout << 0;
    return;
  }

  auto isSpace = [](const char ch) { return std::isspace(ch); };

  str.erase(str.begin(), std::find_if_not(str.begin(), str.end(), isSpace));
  str.erase(std::find_if_not(str.rbegin(), str.rend(), isSpace).base(),
            str.end());

  const size_t numSpaces = std::count(str.begin(), str.end(), ' ');
  std::cout << numSpaces + 1;
}