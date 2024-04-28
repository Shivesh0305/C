#include<stdio.h>

float convert(float a);

int main(){
    float c;
    printf("Enter temp: ");
    scanf("%f",&c);
    printf("%f", convert(c));
    return 0;
}

float convert(float a){
    float x;
    x=(float)((a*(9/5))+32);
    return x;
}