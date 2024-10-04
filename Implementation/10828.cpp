// https://www.acmicpc.net/problem/10828

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> SplitString(const std::string& str,
                                     char delimiter = ' ') {
  std::vector<std::string> tokens;
  std::string token;

  for (const char ch : str) {
    if (ch == delimiter && !token.empty()) {
      tokens.push_back(std::move(token));
    } else {
      token += ch;
    }
  }

  if (!token.empty()) {
    tokens.push_back(std::move(token));
  }
  return tokens;
}

void P10828() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  int n;
  std::cin >> n;
  std::cin.ignore(1, '\n');

  std::vector<int> myStack;

  for (int i = 0; i < n; ++i) {
    std::string input;
    std::getline(std::cin, input);

    std::vector<std::string> tokens = SplitString(input);

    const std::string& command = tokens.front();

    if (command == "push") {
      myStack.push_back(std::stoi(tokens.back()));
    } else if (command == "pop") {
      int numToPrint = -1;
      if (!myStack.empty()) {
        numToPrint = myStack.back();
        myStack.pop_back();
      }
      std::cout << numToPrint << std::endl;
    } else if (command == "size") {
      std::cout << myStack.size() << std::endl;
    } else if (command == "empty") {
      if (myStack.empty()) {
        std::cout << 1 << std::endl;
      } else {
        std::cout << 0 << std::endl;
      }
    } else if (command == "top") {
      if (myStack.empty()) {
        std::cout << -1 << std::endl;
      } else {
        std::cout << myStack.back() << std::endl;
      }
    }
  }
}
