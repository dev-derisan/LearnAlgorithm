// https://www.acmicpc.net/problem/2675

#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

struct Case {
  int repeatCount;
  std::string str;
};

void P2675() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int t;
  std::cin >> t;

  std::vector<Case> cases(t);
  for (int i = 0; i < t; ++i) {
    std::cin >> cases[i].repeatCount >> cases[i].str;
  }

  for (const Case& testCase : cases) {
    std::string temp;
    temp.reserve(testCase.str.size() * testCase.repeatCount);
    for (const char ch : testCase.str) {
      for (int i = 0; i < testCase.repeatCount; ++i) {
        temp += ch;
      }
    }
    std::cout << temp << '\n';
  }
}