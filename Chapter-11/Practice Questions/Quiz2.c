#include<stdio.h>
#include<stdlib.h>

int main(){
    float *ptr,size;
    scanf("%d",&size);
    ptr=(float *)calloc(size,sizeof(float));
    return 0;
}