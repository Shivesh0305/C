#include<stdio.h>

int main(){
    int a;
    printf("Enter salary: ");
    scanf("%d", &a);

    if (a>=250000 && a<=500000){
        // float b=(a*5)/100;
        printf("%d", (a*5)/100);
    }
    else if(a>500000 && a<=1000000){
        // int b=(a*20)/100;
        printf("%d", (a*20)/100);
    }
    else if(a>1000000){
        // int b=(a*30)/100;
        printf("%d", (a*30)/100);
    }
    return 0;
}