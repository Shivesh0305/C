#include<stdio.h>

typedef struct datentime
{
    int day;
    int month;
    int year;
    int hour;
    int min;
    int sec;
}dt;

void display(dt d){
    printf("Today's date is: %d/%d/%d\n",d.day,d.month,d.year);
    printf("The time is: %d:%d:%d",d.hour,d.min,d.sec);
}

void comp(dt d1,dt d2){
    if (d1.year>d2.year)
    {
        printf("%d/%d/%d was before %d/%d/%d\n",d2.day,d2.month,d2.year,d1.day,d1.month,d1.year);
    }
    else if (d1.month>d2.month)
    {
        printf("%d/%d/%d was before %d/%d/%d\n",d2.day,d2.month,d2.year,d1.day,d1.month,d1.year);
    }
    else if (d1.day>d2.day)
    {
        printf("%d/%d/%d was before %d/%d/%d\n",d2.day,d2.month,d2.year,d1.day,d1.month,d1.year);
    }
    else{
        printf("%d/%d/%d was before %d/%d/%d\n",d1.day,d1.month,d1.year,d2.day,d2.month,d2.year);
    }
    
}

int main(){
    dt d1,d2;

    printf("Enter Date: ");
    scanf("%d %d %d",&d1.day,&d1.month,&d1.year);
    printf("Enter time: ");
    scanf("%d %d %d",&d1.hour,&d1.min,&d1.sec);
    
    printf("Enter Date: ");
    scanf("%d %d %d",&d2.day,&d2.month,&d2.year);
    printf("Enter time: ");
    scanf("%d %d %d",&d2.hour,&d2.min,&d2.sec);
    
    display(d1);
    printf("\n");
    display(d2);
    printf("\n");

    comp(d1,d2);
    return 0;
}