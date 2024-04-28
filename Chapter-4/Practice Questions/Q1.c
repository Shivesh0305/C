#include<stdio.h>

int main(){
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i <=10 ; i++)
    {
        printf("5 X %d = %d\n", i, n*i);
    }
    
    
    return 0;
}