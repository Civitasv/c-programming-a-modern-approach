#include "quicksort.h"

void quicksort(int arr[], int low, int high)
{
  if (low >= high)
    return;
  int i = split(arr, low, high);
  quicksort(arr, low, i - 1);
  quicksort(arr, i + 1, high);
}

int split(int arr[], int low, int high)
{
  int part_element = arr[low];

  for (;;)
  {
    while (low < high && arr[high] >= part_element)
    {
      high--;
    }
    if (low >= high)
      break;
    arr[low++] = arr[high];
    while (low < high && arr[low] <= part_element)
    {
      low++;
    }
    if (low >= high)
      break;
    arr[high--] = arr[low];
  }

  arr[high] = part_element;
  return high;
}