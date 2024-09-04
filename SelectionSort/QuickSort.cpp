#include <algorithm>
#include <iostream>
#include <vector>

// void QuickSort(std::vector<int>& numbers, int low, int high) {
//   if (low >= high) {
//     return;
//   }
//
//   int pivot = low;
//   int left = (low + 1);
//   int right = high;
//
//   while (left < right) {
//     while (left <= high && numbers[left] <= numbers[pivot])
//       ++left;
//
//     while (right > low && numbers[right] >= numbers[pivot])
//       --right;
//
//     if (left < right) {
//       std::swap(numbers[left], numbers[right]);
//     }
//   }
//   std::swap(numbers[pivot], numbers[right]);
//   QuickSort(numbers, low, right - 1);
//   QuickSort(numbers, right + 1, high);
// }

// Quicksort from https://www.geeksforgeeks.org/cpp-program-for-quicksort/

int partition(std::vector<int>& vec, int low, int high) {
  int pivot = vec[high];
  int i = (low - 1);

  for (int j = low; j <= high - 1; j++) {
    if (vec[j] <= pivot) {
      i++;
      std::swap(vec[i], vec[j]);
    }
  }

  std::swap(vec[i + 1], vec[high]);
  return (i + 1);
}

void QuickSort(std::vector<int>& vec, int low, int high) {
  if (low < high) {
    int pi = partition(vec, low, high);
    QuickSort(vec, low, pi - 1);
    QuickSort(vec, pi + 1, high);
  }
}