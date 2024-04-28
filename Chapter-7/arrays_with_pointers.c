#include<stdio.h>

int main(){
    int marks[5];
    // int *j=&marks[0];
    int *j=marks;
    for (int i = 0; i <5; i++)
    {
        printf("Enter marks of student %d:",i+1);
        scanf("%d",j);
        j++;
    }
    for (int i = 0; i <5; i++)
    {
        printf("Marks of student %d %d\n",i+1,marks[i]);
    }
    
    return 0;
}