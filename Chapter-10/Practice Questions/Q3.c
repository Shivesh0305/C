#include<stdio.h>

int main(){
    FILE *ptr,*fptr;
    ptr=fopen("sample1.txt","r");
    fptr=fopen("file2.txt","w");
    char c=fgetc(ptr);
    while (c!=EOF)
    {
        fputc(c,fptr);
        fputc(c,fptr);
        c=fgetc(ptr);
    }
    
    return 0;
}