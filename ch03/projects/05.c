#include "stdio.h"

int main() {
    int arr[16];

    printf("Enter the numbers from 1 to 16 in any order: \n");

    scanf("%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d%d",
          &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7], &arr[8], &arr[9],
          &arr[10], &arr[11], &arr[12], &arr[13], &arr[14], &arr[15]);

    printf("%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n%d\t%d\t%d\t%d\n",
           arr[0],arr[1],arr[2],arr[3],arr[4],arr[5],arr[6],arr[7],arr[8],
           arr[9],arr[10],arr[11],arr[12],arr[13],arr[14],arr[15]);

    printf("Row sums: %d %d %d %d\n", arr[0]+arr[1]+arr[2]+arr[3], arr[4]+arr[5]+arr[6]+arr[7],
           arr[8]+arr[9]+arr[10]+arr[11], arr[12]+arr[13]+arr[14]+arr[15]);

    printf("Column sums: %d %d %d %d\n", arr[0]+arr[4]+arr[8]+arr[12], arr[1]+arr[5]+arr[9]+arr[13],
           arr[2]+arr[6]+arr[10]+arr[14], arr[3]+arr[7]+arr[11]+arr[15]);

    printf("Diagonal sums: %d %d\n", arr[0]+arr[5]+arr[10]+arr[15], arr[3]+arr[6]+arr[9]+arr[12]);

    return 0;
}