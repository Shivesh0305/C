#include<stdio.h>

typedef struct complex
{
    float icomp;
    float jcomp;
}comp;

void display(comp c){
    printf("%.2fi+%.2fj\n",c.icomp,c.jcomp);
    
    
}

int main(){
    comp c[5];

    for (int i = 1; i <=5; i++)
    {
        printf("Enter i component: ");
        scanf("%f",&c[i].icomp);
        printf("Enter j component: ");
        scanf("%f",&c[i].jcomp);
    }
    
    for (int i = 1; i <=5; i++)
    {
        display(c[i]);
    }
    

    return 0;
}
