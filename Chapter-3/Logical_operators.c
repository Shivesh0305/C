#include<stdio.h>

int main(){
    int a, b;
    int vip=0;
    vip=1;
    printf("Enter a num: ");
    scanf("%d", &a);
    printf("Enter a num: ");
    scanf("%d", &b);
    
    if((a<10 && b>5) || !(vip==1)){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
}