#include<stdio.h>

int main(){
    FILE *ptr;
    // fgetc
    ptr=fopen("sample.txt","r");
    char c=fgetc(ptr);
    printf("The value of my character is %c\n",c);

    // //fputc
    ptr=fopen("sample.txt","w");
    putc('a',ptr);

    //continuously printing chs using fgetc
    ptr=fopen("sample.txt","r");
    char c=fgetc(ptr);
    while (c!=EOF)
    {
        printf("%c\n",c);
        c=fgetc(ptr);
    }
    
    return 0;
}