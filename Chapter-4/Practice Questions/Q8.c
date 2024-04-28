#include<stdio.h>

int main(){
    int a=10;
    int fact=1;
    for (int i = 1; i <=a; i++)
    {
        fact*=i;
    }
    printf("Factorial: %d\n",fact);
    return 0;
}