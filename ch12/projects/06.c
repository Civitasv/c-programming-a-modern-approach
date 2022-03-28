#include "stdio.h"

#define N 10

void quicksort(int *arr, int *low, int *high);

int *split(int *arr, int *low, int *high);

int main()
{
    int a[N], i;

    printf("Enter %d numbers to be sorted: ", N);
    for (i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }

    quicksort(a, a, a + N - 1);
    printf("In sorted order: ");
    for (i = 0; i < N; i++)
    {
        printf("%d ", a[i]);
    }

    printf("\n");
    return 0;
}

void quicksort(int *arr, int *low, int *high)
{
    if (low >= high)
        return;
    int *mid = split(arr, low, high);
    quicksort(arr, low, mid - 1);
    quicksort(arr, mid + 1, high);
}

int *split(int *arr, int *low, int *high)
{
    int part_element = *low;

    while (1)
    {
        while (low<high && * high> part_element)
        {
            high--;
        }
        if (low >= high)
            break;
        *low++ = *high;
        while (low < high && *low <= part_element)
        {
            low++;
        }
        if (low >= high)
            break;
        *high-- = *low;
    }

    *high = part_element;
    return high;
}