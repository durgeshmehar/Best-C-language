#include <stdio.h>

int main()
{
    int i, j, r;
    printf("enter:-");
    scanf("%d", &r);
    for (i = r; i >= 1; i--)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%c     ", 64 + i); // 65-a  69-e
        }
        printf("\n");
    }

    return 0;
}