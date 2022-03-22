#include "stdio.h"

int main(){
    double n;
    double sum=0;

    printf("This program sums a series of doubles. \n");
    printf("Enter doubles (0 to terminate): ");

    scanf("%lf", &n);
    while (n!=0){
        sum += n;
        scanf("%lf", &n);
    }

    printf("The sum is: %f\n", sum);
    return 0;
}