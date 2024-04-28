#include<stdio.h>
#include <stdlib.h> 
#include <time.h> 

int result(int cmp,int ply){
    int a;
    if (cmp==ply)
    {
        a=0;
    }
    else if ((cmp==1 && ply==2) || (cmp==2 && ply==3) || (cmp==3 && ply==1))
    {
        a=-1;
    }
    else if ((cmp==1 && ply==3) || (cmp==3 && ply==2) || (cmp==2 && ply==1))
    {
        a=1;
    }
    return a;
    
}

int main(){
    int ply;
    int cmp;
    char comp;

    printf("Enter your choice (Type 1 for snake, 2 for water, 3 for gun): ");
    scanf("%d",&ply);

    srand(time(0));
    int num=rand()%100+1;

    if (num<=33)
    {   
        cmp=1;
        // comp='snake';
    }
    else if (num>33 && num<=66)
    {
        cmp=2;
        // comp='water';
    }
    else
    {
        cmp=3;
        // comp='gun';
    }
    
    // printf("%d\n",cmp);
    int res=result(cmp,ply);
    if (res==0)
    {
        printf("Its a tie");
    }
    else if (res==1)
    {
        printf("You won");
    }
    else 
    {
        printf("Computer won");
    }
    
    return 0;
}