#include<stdio.h>

int count(int *arr){
    int c=0;
    for (int i = 0; i < 10; i++)
    {
        if (arr[i]>0)
        {
            c++;
        }
        
    }
    return c;
}
int main(){
    int num[]={-1,-1,-1,-1,2,3,4,-3,-5,-8};
    printf("%d",count(num));
    return 0;
}