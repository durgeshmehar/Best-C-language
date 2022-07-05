#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
   int number, guess, attempt = 1;
   srand(time(0));
   number=rand()%100+1;

    //printf("random number is %d\n", number);
    // keep guass number
    printf("%d\n",number);
    printf("Guess the number between 1-100\n");
    do
    {
         scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower Number Please!\n");
        }
        else if (guess < number)
        {
            printf("Greater Number Please!\n");   
        }
        else
        {
            printf("You guess in %d attempts\n", attempt);
        }
        attempt++;

    }while (guess!=number);
    return 0;
}