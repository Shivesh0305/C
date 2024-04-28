#include<stdio.h>

int main(){
    FILE *ptr;
    int num;
    char *s;
    ptr=fopen("employeedetails.txt","w");

    for (int i = 1; i <=2; i++)
    {
        printf("Enter name: ");
        scanf("%s",&s);
        printf("Enter salary: ");
        scanf("%d",&num);
        fprintf(ptr,"%d",num);
        fprintf(ptr,"%s\n",s);
        
    }
    
    return 0;
}