#include<stdio.h>

int main(){
    // char str[]={'S','H','I','V','E','S','H','\0'};
    char str[]="SHIVESH";
    char *ptr=&str[0];
    printf("%u",ptr);
    return 0;
}