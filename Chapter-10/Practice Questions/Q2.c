#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr=fopen("multiplicationtable.txt","w");

    printf("Enter a num: ");
    scanf("%d",&num);

    for (int i = 1; i <=10; i++)
    {
        fprintf(ptr,"%dX%d=%d\n",num,i,num*i);
    }
    
    return 0;
}