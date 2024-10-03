// https://www.acmicpc.net/problem/1316

#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

bool IsGroupWord(const std::string& word) {
  std::string temp = word;
  temp.erase(std::unique(temp.begin(), temp.end()), temp.end());

  return std::all_of(temp.begin(), temp.end(), [&temp](const char ch) {
    return (std::count(temp.begin(), temp.end(), ch) == 1);
  });
}

void P1316() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int n;
  std::cin >> n;
  std::vector<std::string> vec(n);
  for (int i = 0; i < n; ++i) {
    std::cin >> vec[i];
  }

  std::cout << std::count_if(vec.begin(), vec.end(), IsGroupWord);
}