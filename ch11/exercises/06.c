#include <stdio.h>
#include <limits.h>

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    if (n < 2) {
        printf("The array at least has two elements.");
        return;
    }
    *largest = *second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else {
            if (a[i] > *second_largest) {
                *second_largest = a[i];
            }
        }
    }
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    int largest, second_largest;
    find_two_largest(arr, 5, &largest, &second_largest);

    printf("%d %d", largest, second_largest);
    return 0;
}