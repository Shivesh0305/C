#include<stdio.h>

// void printArray(int *ptr, int n){
//     for (int i = 0; i < n; i++)
//     {
//         printf("Value of element %d is %d\n",i+1,*(ptr+i));
//     }
    
// }

void printArray(int ptr[], int n){
    for (int i = 0; i < n; i++)
    {
        printf("Value of element %d is %d\n",i+1,ptr[i]);
    }
    ptr[2]=555; //This value will change in main array also
    
}

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    printArray(arr, 9);
    printf("%d",arr[2]);
    return 0;
}
