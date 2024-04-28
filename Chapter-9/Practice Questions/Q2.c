#include<stdio.h>

struct complex
{
    float icomp;
    float jcomp;
};

void sum(struct complex c1,struct complex c2){
    float ci=c1.icomp+c2.icomp;
    float cj=c1.jcomp+c2.jcomp;
    printf("%.2fi+%.2fj",ci,cj);
}

int main(){
    struct complex c1;
    printf("Enter i component: ");
    scanf("%f",&c1.icomp);
    printf("Enter j component: ");
    scanf("%f",&c1.jcomp);
    
    struct complex c2;
    printf("Enter i component: ");
    scanf("%f",&c2.icomp);
    printf("Enter j component: ");
    scanf("%f",&c2.jcomp);

    sum(c1,c2);
    return 0;
}

