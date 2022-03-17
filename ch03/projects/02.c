#include "stdio.h"

int main(){
    int number;
    float unit_price;
    int mm,dd,yyyy;

    printf("Enter item number: ");
    scanf("%d", &number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase data (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);

    printf("Item\tUnit\tPurchase\n");
    printf("\tPrice\tDate\n");

    printf("%-d\t$ %6.2f\t%-.2d/%-.2d/%-.4d\n", number, unit_price, mm, dd, yyyy);

    return 0;
}