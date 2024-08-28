#include <iostream>
#include <vector>

void BubbleSort(std::vector<int>& numbers)
{
  for (int i = 0; i < numbers.size() - 1; ++i)
  {
    for (int j = 0; j < numbers.size() - i - 1; ++j)
    {
      if (numbers[j] > numbers[j + 1])
      {
        std::swap(numbers[j], numbers[j + 1]);
      }
    }
  }
}