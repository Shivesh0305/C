#include<stdio.h>
#include<string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
}emp;

int main(){

    emp e1;
    emp *ptr;

    ptr=&e1;

    ptr->code=100;
    ptr->salary=10.10;
    strcpy(ptr->name,"shivesh");
}