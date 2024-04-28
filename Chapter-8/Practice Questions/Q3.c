#include<stdio.h>

int main(){
    char *c="shivesh";
    int i=0;
    int len=0;
    while (c[i]!='\0')
    {   
        i++;
        len++;
    }
    printf("%d",len);
    
    
    return 0;
}