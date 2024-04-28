#include<stdio.h>

void swap(int *a, int *b);

int main(){
    int x=4, y=3;
    printf("Value of x y before swap is %d, %d\n", x, y);
    swap(&x, &y);
    printf("Value of x y after swap is %d, %d\n", x, y);
    return 0;
}

void swap(int *a, int *b){
    int t;
    t=*a;
    *a=*b;
    *b=t;
}