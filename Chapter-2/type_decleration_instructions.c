#include<stdio.h>

int main(){
    int a=4,b,c;  // TYPE DECLERATION INSTRUCTION!
    b=c=a;
    printf("Value of a is %d\n",a);
    printf("Value of b is %d\n",b);
    printf("Value of c is %d\n",c);
    
    float b=a+8.9;  //THROWS AN ERROR AS 'a' SHOULD BE DEFINED FIRST
    float a=1.1;
    printf("%f", b);

    int a,b,c,d;   //THIS WORKS!
    a=b=c=d=30;
    printf("%d %d %d %d", a, b, c, d);

    
    return 0;
}