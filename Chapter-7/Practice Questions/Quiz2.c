#include<stdio.h>

int main(){
    int i=10;
    int j=20;
    int *k=&i;
    int *z=&j;

    if (k>z)
    {
        // printf("True\n");
        printf("%u\n",k-z);
        // printf("%u\n",z);
    }
    else{
        printf("False");
    }
    
    return 0;
}