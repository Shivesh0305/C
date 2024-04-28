#include<stdio.h>

int main(){
    int marks[3][5];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Enter marks in sub %d: ",j+1);
            scanf("%d", &marks[i][j]);
        }
        
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n ",*marks[i]);
    }
    
    
    return 0;
}