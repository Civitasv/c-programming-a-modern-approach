/**
 * 原因：表达式不含有整形
 * 修改：int *middle = low + (high - low) / 2;
 */

#include "stdio.h"

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *low = arr, *high = &arr[4];

    int *middle = low + (high - low) / 2;

    return 0;
}