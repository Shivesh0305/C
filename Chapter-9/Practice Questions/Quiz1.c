#include<stdio.h>
#include<string.h>

struct employee
{
    int code;
    float salary;
    char name[20];
};

int main(){
    struct employee e1,e2,e3;

        printf("Enter employee 1 code: ");
        scanf("%d",&e1.code);
        printf("Enter employee 1 salary: ");
        scanf("%f",&e1.salary);
        printf("Enter employee 1 name: ");
        scanf("%s",e1.name);
    
        printf("Enter employee 2 code: ");
        scanf("%d",&e2.code);
        printf("Enter employee 2 salary: ");
        scanf("%f",&e2.salary);
        printf("Enter employee 2 name: ");
        scanf("%s",e2.name);

        printf("Enter employee 3 code: ");
        scanf("%d",&e3.code);
        printf("Enter employee 3 salary: ");
        scanf("%f",&e3.salary);
        printf("Enter employee 3 name: ");
        scanf("%s",e3.name);
    
    
    return 0;
} 