#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    e1.salary=23.32;
    e1.code=100;
    strcpy(e1.name, "Shivesh");
    return 0;
}