#include <stdio.h>

int main()
{
    int y;
    printf("Enter the year\n ");
    scanf("%d", &y);

    if (y % 4 == 0)
    {
        if (y%100==0)
        {
           if(y%400==0){
               printf("Year is leap\n");
           }
           else{printf("Not yeap year\n");}          //1900,2100
        }
        else{printf("Year is leap\n");}
    }
    else
    {
        printf("Not Year yeap\n");
    }
    return 0;
}