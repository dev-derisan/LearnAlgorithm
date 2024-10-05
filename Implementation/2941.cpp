// https://www.acmicpc.net/problem/2941

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <vector>

size_t GetCroatianCount(const std::string& word, const std::string& croatianAlphabet) {
  size_t count = 0;
  size_t pos = 0;
  size_t offset = 0;
  while ((pos = word.find(croatianAlphabet, offset)) != std::string::npos) {
    ++count;
    offset = (pos + croatianAlphabet.size());
  }

  return count;
}

void P2941() {
  std::cin.tie(NULL);
  std::ios::sync_with_stdio(false);

  std::string word;
  std::cin >> word;

  std::array<std::string, 8> croatians = {"c=", "c-", "dz=", "d-",
                                          "lj", "nj", "s=",  "z="};

  size_t count = 0;
  for (const std::string& alphabet : croatians) {
    count += GetCroatianCount(word, alphabet);
  }

  count += word.size() - (count * 2);
  std::cout << count;
}
