#include<stdio.h>

void reverse(int *arr){
    int s;
    for (int i = 0; i <5/2; i++)
    {
        s=arr[i];
        arr[i]=arr[5-(i+1)];
        arr[5-(i+1)]=s;
    }
}

int main(){
    int arr[]={1,2,3,4,5};

    reverse(arr);
    
    for (int i = 0; i < 5; i++)
    {
        if (i==0)
        {
            printf("[%d, ",arr[i]);
        }
        else if (i>0 && i!=4)
        {
            printf("%d, ",arr[i]);
        }
        else if (i==4)
        {
            printf("%d]", arr[i]);
        }
        
        
    }
    return 0;
}
