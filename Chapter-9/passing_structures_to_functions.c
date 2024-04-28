#include<stdio.h>

struct employee
{
    int code;
    float salary;
    char name[10];
};

void display(struct employee e){
    printf("CODE: %d\n",e.code);
    printf("SALARY: %f\n",e.salary);
    printf("NAME: %s\n",e.name);
}

int main(){
    struct employee e1;

    printf("Enter code of employee: ");
    scanf("%d",&e1.code);
    printf("Enter salary of employee: ");
    scanf("%f",&e1.salary);
    printf("Enter name of employee: ");
    scanf("%s",e1.name);

    display(e1);
    return 0;
}