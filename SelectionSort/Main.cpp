#include <vector>
#include <iostream>

void SelectionSort(std::vector<int>& nums);
void BubbleSort(std::vector<int>& numbers);
void InsertionSort(std::vector<int>& numbers);

int main()
{
  std::vector<int> nums{ 1, 5, -1, 8, 10, 9, 6 };
  InsertionSort(nums);

  for (const int num : nums)
  {
    std::cout << num << std::endl;
  }
}