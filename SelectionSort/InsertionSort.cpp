#include <algorithm>
#include <iostream>
#include <vector>

void InsertionSort(std::vector<int>& numbers)
{
  for (int i = 1; i < numbers.size(); ++i)
  {
    int key = numbers[i];
    int j = (i - 1);

    while (j >= 0 && numbers[j] > key)
    {
      numbers[j + 1] = numbers[j];
      --j;
    }

    numbers[j + 1] = key;
  }
}