#include <algorithm>
#include <iostream>
#include <vector>
#include <ranges>

using ElementType = int;

int BinarySearch(
  const std::vector<ElementType>& collection,
  const ElementType& target)
{
  int low = 0;
  int high = static_cast<int>(collection.size()) - 1;

  while (low <= high)
  {
    int mid = (low + high) / 2;
    if (collection[mid] == target)
    {
      return mid;
    }
    else if (collection[mid] < target)
    {
      low = (mid + 1);
    }
    else
    {
      high = (mid - 1);
    }
  }

  return -1;
}

int main()
{
  std::vector<ElementType> numbers = 
  {
    10, 5, 6, 2, 7, 3
  };

  std::ranges::sort(numbers);
  const int target = 6;
  const int targetIndex = BinarySearch(numbers, target);

  if (targetIndex != -1)
  {
    std::cout << "Target Index: " << targetIndex << ", Value: " << numbers[targetIndex] << std::endl;
  }
  else
  {
    std::cout << "Couldn't find the target!" << std::endl;
  }
}