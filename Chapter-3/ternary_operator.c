#include<stdio.h>

int main(){
    int a, b;
    printf("Enter a num: ");
    scanf("%d", &a);

    (a<5)? printf("%d less than 5",a) : printf("%d less than 5",a);
    return 0;
}