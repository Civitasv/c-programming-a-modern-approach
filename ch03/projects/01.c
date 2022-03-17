#include "stdio.h"

int main(){
    int mm,dd,yyyy;

    printf("Enter a data (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&mm,&dd,&yyyy);

    printf("You entered the data %.4d%.2d%.2d\n",yyyy,mm,dd);

    return 0;
}

