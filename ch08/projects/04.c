#include "stdio.h"


int main() {
    int a[10], i;
    printf("Enter %d numbers: ", (int) (sizeof a / sizeof a[0]));
    for (i = 0; i < (int) (sizeof a / sizeof a[0]); i++) {
        scanf("%d", &a[i]);
    }

    printf("In reverse order:");
    for (int i = (int) (sizeof a / sizeof a[0] - 1); i >= 0; i--)
        printf(" %d", a[i]);
    printf("\n");
    return 0;
}