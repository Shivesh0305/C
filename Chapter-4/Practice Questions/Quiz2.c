#include<stdio.h>

int main(){
    int n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for (int i = n; i; i--)
    {
        printf("The value of n is: %d\n",i);
    }
    
    return 0;
}