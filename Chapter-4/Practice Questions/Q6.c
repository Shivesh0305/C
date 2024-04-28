#include<stdio.h>

int main(){
    int sum=0;
    int i=0;
    // for (int i = 10; i ; i--)
    // {
    //     sum+=i;
        
    // }
    // printf("%d", sum);
    do
    {   
        sum+=i;
        i++;
    } while (i<=10);
    printf("%d",sum);
    return 0;
}