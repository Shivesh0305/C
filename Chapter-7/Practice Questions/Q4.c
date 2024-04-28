#include<stdio.h>

int main(){
    int s[10];
    int input;
    printf("Enter a number: ");
    scanf("%d",&input);
    for (int i = 0; i < 10; i++)
    {
        s[i]=input*(i+1);
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (i==0)
        {
            printf("{%d, ",s[i]);
        }
        else if (i>0 && i!=9)
        {
            printf("%d, ",s[i]);
        }
        else if (i==9)
        {
            printf("%d}", s[i]);
        }
        
    }
    
    return 0;
}