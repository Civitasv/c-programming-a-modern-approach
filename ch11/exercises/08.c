#include <stdio.h>

int *find_largest(int a[], int n) {
    int *max_ptr = a;
    int max = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] > max) {
            max = a[i];
            max_ptr = &a[i];
        }
    }
    return max_ptr;
}

int main() {
    int arr[5] = {1, 3, 2, 40, 20};
    int *max_ptr = find_largest(arr, 5);

    printf("%d", *max_ptr);
    return 0;
}