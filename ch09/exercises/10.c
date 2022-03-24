#include <limits.h>

int arr_max(int[], int);

double arr_average(int[], int);

int arr_positive(int[], int);

int arr_max(int arr[], int n) {
    int max = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

double arr_average(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++)
        sum += arr[i];

    return sum * 1.0 / n;
}

int arr_positive(int arr[], int n) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0)
            count += 1;
    }
    return count;
}