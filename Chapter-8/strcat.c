#include<stdio.h>
#include<string.h>

int main(){
    char s[10]="shivesh";
    char *st="upadhyay";
    strcat(s,st);
    printf("%s",s);
    return 0;
}