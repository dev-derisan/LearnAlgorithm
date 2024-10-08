// https://www.acmicpc.net/problem/15596

#include <algorithm>
#include <array>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <numeric>

long long sum(std::vector<int>& a) {
  long long result = 0;
  for (const int num : a) {
    result += num;
  }
  return result;
}
