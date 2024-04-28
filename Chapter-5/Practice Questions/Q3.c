#include<stdio.h>

float force(float a);

int main(){
    float c;
    printf("Enter mass: ");
    scanf("%f",&c);
    printf("%f", force(c));
    return 0;
}

float force(float a){
    float x;
    x=(float)(a*9.8);
    return x;
}