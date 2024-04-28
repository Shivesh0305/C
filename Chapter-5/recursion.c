#include<stdio.h>

int factorial(int a); 

int main(){
    int a=4, b;
    b=factorial(a);
    printf("%d", b);
    return 0;
}

int factorial(int a){
    
    if (a==1 || a==0)
    {
        return 1;
    }
    else{
        return a*factorial(a-1);
    }
    
}