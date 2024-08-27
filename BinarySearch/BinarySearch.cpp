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
