#include<stdio.h>

int main(){
    float i=8;
    float *j;
    j=&i;
    printf("Address i=%u\n",&i);
    printf("Address i=%u\n",j);
    printf("Address j=%u\n",&j);
    printf("Address i=%f\n",i);
    printf("Address i=%f\n",*(&i));
    printf("Address i=%f\n",*j);
    return 0;
}