#include<stdio.h>

int main(){
    int i=10; //for integer and float increment of 4 and for char increment of 1 (as int and float are of 4 bytes and char are of 1 byte)
    int *j=&i;
    printf("Value of j %u\n",j);
    // j++;
    // j--;
    j=j+1;
    printf("Value of j %u\n",j);

    return 0;
}