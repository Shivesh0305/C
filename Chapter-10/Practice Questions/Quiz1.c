#include<stdio.h>

int main(){
    FILE *ptr;
    ptr=fopen("sample.txt","r");
    
    if (ptr==NULL)
    {
        printf("File doesn't exist");
    }
    
    return 0;
}