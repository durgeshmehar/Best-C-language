#include <stdio.h>
int main()
{
    // Multiplication table of given number
    int a, i;
    printf("Enter the number n\n");
    scanf("%d", &a);
    for (i = 1; i <= 10; i++)
    {
        printf("%d X %d =%d\n", a, i, a * i);
    }

    return 0;
}