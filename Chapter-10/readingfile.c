#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    ptr=fopen("sample.txt","r");
    fscanf(ptr,"%d",&num);
    fclose(ptr);
    printf("%d",num);
    return 0;
}