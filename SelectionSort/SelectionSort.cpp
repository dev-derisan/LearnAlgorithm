#include <algorithm>
#include <iostream>
#include <vector>

void SelectionSort(std::vector<int>& nums)
{
  for (size_t i = 0; i < nums.size(); ++i)
  {
    auto startIter = (std::begin(nums) + i);
    auto minIter = std::min_element(startIter, std::end(nums));
    std::iter_swap(startIter, minIter);
  }
}

void SelectionSort2(std::vector<int>& nums)
{
  for (size_t i = 0; i < nums.size(); ++i)
  {
    size_t minIndex = i;
    for (size_t j = i; j < nums.size(); ++j)
    {
      if (nums[minIndex] > nums[j])
      {
        minIndex = j;
      }
    }
    std::swap(nums[i], nums[minIndex]);
  }
}
