#include<stdio.h>

int main(){
    int a, b, c, d, e;

    printf("Enter marks 1: ");
    scanf("%d", &a);
    printf("Enter marks 2: ");
    scanf("%d", &b);
    printf("Enter marks 3: ");
    scanf("%d", &c);
    printf("Enter marks 4: ");
    scanf("%d", &d);
    printf("Enter marks 5: ");
    scanf("%d", &e);

    int percentage=(a+b+c+d+e)/5;
    if (percentage>=90)
    {
        printf("Grade: A");
    }
    else if (percentage>=80 && percentage<90)
    {
        printf("Grade: B");
    }
    else if (percentage>=70 && percentage<80)
    {
        printf("Grade: C");
    }
    else if (percentage>=60 && percentage<70)
    {
        printf("Grade: D");
    }
    
    
    return 0;
}