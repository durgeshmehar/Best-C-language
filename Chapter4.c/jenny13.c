#include <stdio.h>

int main()
{
    int i, space, k,rows;
    printf("Enter how many time you want rows\n");
    scanf("%d",&rows);
    for (i = 1; i <= rows; i++)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for (i = rows-1; i >= 1; i--)
    {
        for (space = 1; space <= rows - i; space++)
        {
            printf(" ");
        }
        for (k = 1; k <= 2 * i - 1; k++)
        {
            printf("*");
        }
        printf("\n");}
        return 0;
    }