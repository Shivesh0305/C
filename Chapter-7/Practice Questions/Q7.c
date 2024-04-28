#include<stdio.h>

int main(){
    int mul[3][10];
    for (int i = 0; i < 10; i++)
    {
        mul[0][i]=2*(i+1);        
        mul[1][i]=7*(i+1);        
        mul[2][i]=9*(i+1);        
    }
    for (int j = 0; j < 3; j++)
    {
        for (int i = 0; i < 10; i++)
    {
        if (i==0 && j==0)
        {
            printf("{{%d, ",mul[j][i]);
        }
        if (i==0)
        {
            printf("{%d, ",mul[j][i]);
        }
        else if (i>0 && i!=9)
        {
            printf("%d, ",mul[j][i]);
        }
        else if (i==9 && j==2)
        {
            printf("%d}}", mul[j][i]);
        }
        else if (i==9)
        {
            printf("%d}\n", mul[j][i]);
        }
        
        
    }
    }
    
    return 0;
}