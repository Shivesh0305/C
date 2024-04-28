#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee facebook[100];

    facebook[0].code=100;
    facebook[0].salary=10.10;
    strcpy(facebook[0].name,"Shivesh");

    struct employee e1={1,2.3,"shivesh"};
    struct employee e2={0};
    return 0;
}