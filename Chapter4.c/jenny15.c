#include <stdio.h>
int main()
{
    int i, j, rows;
    printf("Enter how many want rows\n");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c ", 64 + j);
        }
        printf("\n");
    }
    return 0;
}