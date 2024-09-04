#include <iostream>
#include <vector>

void SelectionSort(std::vector<int>& nums);
void BubbleSort(std::vector<int>& numbers);
void InsertionSort(std::vector<int>& numbers);
void QuickSort(std::vector<int>&, int, int);

int main() {
  std::vector<int> nums{1, 5, -1, 8, 10, 9, 6, 5};
  QuickSort(nums, 0, nums.size() - 1);

  for (const int num : nums) {
    std::cout << num << std::endl;
  }
}