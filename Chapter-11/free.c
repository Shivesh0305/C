#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr,*ptr1;
    ptr=(int *) malloc(600*sizeof(int)); 

    for (int i = 0; i <600; i++)
    {
        ptr1=(int *) malloc(6000000*sizeof(int)); 
        scanf("%d",&ptr[i]);
        free(ptr1);
    }
    return 0;
}