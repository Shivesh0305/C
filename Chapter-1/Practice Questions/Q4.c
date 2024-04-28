#include<stdio.h>

int main(){

    float a, b, c;
    printf("Enter principal ");
    scanf("%f", &a);

    printf("Enter ROI ");
    scanf("%f", &b);

    printf("Enter years ");
    scanf("%f", &c);

    printf("Simple intrest %f", (a*b*c)/100);
    return 0;
}