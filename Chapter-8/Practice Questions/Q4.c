#include<stdio.h>

void slice(char *s, int m, int n){
    int i=0;
    while ((m+i)<=n)
    {
        s[i]=s[i+m];
        i++;
    }
    s[i]='\0';
    
}

int main(){
    char *s;
    int m,n;

    printf("Enter a string: ");
    scanf("%s",s);
    printf("Enter start: ");
    scanf("%d",&m);
    printf("Enter end: ");
    scanf("%d",&n);

    slice(s,m,n);
    printf("The sliced string is %s",s);
    return 0;
}