#include<stdio.h>

int main(){

    float c;
    printf("Enter temp ");
    scanf("%f", &c);

    printf("Temp in farenheit is %f", (c*(9/5))+32);
    return 0;
}