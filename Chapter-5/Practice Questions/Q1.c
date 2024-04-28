#include<stdio.h>

float avg(int a, int b, int c);

int main(){
    float a, b, c;
    printf("Enter 1 num: ");
    scanf("%f", &a);
    printf("Enter 1 num: ");
    scanf("%f", &b);
    printf("Enter 1 num: ");
    scanf("%f", &c);
    printf("%f", avg(a, b, c));
    return 0;
}

float avg(int a, int b, int c){
    float x;
    x=(float)(a+b+c)/3;
    return x;
}