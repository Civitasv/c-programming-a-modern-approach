#include <stdio.h>

void selection_sort(int[], int);

void swap(int[], int, int);

int main() {
  int arr[10];
  printf("input 10 numbers: ");
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]);
  }

  selection_sort(arr, 10);

  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}
void selection_sort(int arr[], int n) {
  if (n <= 0) {
    return;
  }
  int max_index = 0, max = arr[0];
  for (int i = 1; i < n; i++) {
    if (arr[i] > max) {
      max_index = i;
      max = arr[i];
    }
  }
  swap(arr, max_index, n - 1);

  selection_sort(arr, n - 1);
}

void swap(int arr[], int i, int j) {
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}
