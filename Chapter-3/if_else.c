#include<stdio.h>

int main(){
    int a, b;
    printf("Enter a num: ");
    scanf("%d", &a);
    printf("Enter a num: ");
    scanf("%d", &b);
    
    int c=a*b;
    if((c)%2==0){
        printf("%d is even\n", c);
    }
    else{
        printf("%d is odd\n", c);
    }
    return 0;
}