#include<stdio.h>

int main(){

    float a, b;
    printf("Enter the radius ");
    scanf("%f", &a);

    printf("Enter the height ");
    scanf("%f", &b);

    printf("Volume of cylinder is %f", 3.14*(a*a)*b);
    return 0;
}