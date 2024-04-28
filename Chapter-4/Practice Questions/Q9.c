#include<stdio.h>

int main(){
    int a=10;
    int fact=1;
    int i=1;
    while (i<=10)
    {
        fact*=i;
        i++;
    }
    printf("Factorial: %d", fact);
    return 0;
}