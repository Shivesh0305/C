#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
    int num, guess;
    srand(time(0));
    num=rand()%100+1;
    // printf("%d",num);
    int guessnum=0;
    for (int i = 0; i<=100; i++)
    {
        printf("Enter guess: ");
        scanf("%d", &guess);
        if (guess>num)
        {
            printf("Enter Smaller number!\n");
            guessnum++;
        }
        else if (guess<num)
        {
            printf("Enter larger number!\n");
            guessnum++;
        }
        else{
            printf("Correct Guess!!!!\n");
            guessnum++;
            break;
        }
        
        
    }
    printf("Number of guesses: %d",guessnum);
    return 0;
}