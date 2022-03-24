#include "stdio.h"

#define N 10

void quicksort(int arr[], int low, int high);

int split(int arr[], int low, int high);

int main() {
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &a[i]);
    }

    quicksort(a, 0, N - 1);
    printf("In sorted order: ");
    for (i = 0; i < N; i++) {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}

void quicksort(int arr[], int low, int high) {
    if (low >= high)
        return;
    int i = split(arr, low, high);
    quicksort(arr, low, i - 1);
    quicksort(arr, i + 1, high);
}

int split(int arr[], int low, int high) {
    int part_element = arr[low];

    while (low < high) {
        while (low < high && arr[high] > part_element) {
            high--;
        }
        if (low >= high) break;
        arr[low++] = arr[high];
        while (low < high && arr[low] <= part_element) {
            low++;
        }
        if (low >= high) break;
        arr[high--] = arr[low];
    }

    arr[high] = part_element;
    return high;
}