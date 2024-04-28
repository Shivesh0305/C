#include<stdio.h>
#include<string.h>

int main(){
    char s[10];
    char st[10];
    char c;
    int i=0;
    
    // scanf("%c",&c);
    printf("Enter 1: ");
    while (c!='\n')
    {
        // fflush(stdin);
        scanf("%c",&c);
        s[i]=c;
        i++;
    }
    s[i-1]='\0';
    
    printf("Enter 2: ");
    scanf("%s",st);

    int val=strcmp(s,st);
    printf("%d",val);
    return 0;
}