#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("sample.txt","w");
    fprintf(ptr,"This is my first text!");
    fclose(ptr);
    return 0;
}