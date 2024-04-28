#include<stdio.h>

int main(){
    int sum=0;
    for (int i = 1; i <=10; i++)
    {
        int a;
        a=8*i;
        sum+=a;
    }
    printf("%d", sum);
    return 0;
}