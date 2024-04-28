#include<stdio.h>

int display(int *value, int size);

int main(){
    int marks[3][2];
    int *ptr=&marks[0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("Enter value %d of vector %d: ",j+1,i+1);
            scanf("%d",&marks[i][j]);
        }
        
    }
    display(ptr,3);
    
    return 0;
}

int display(int *value, int size){

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; i < 2; j++)
        {
            
        }
        
    }
    
}