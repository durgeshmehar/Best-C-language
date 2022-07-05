#include <stdio.h>

int main()
{
    int a, i, sum;
    printf("Enter +ve number\n");
    for (i = 1; ; i++)
    {
        scanf("%d", &a);
        if (a < 0)
        {
            break;
        }
        sum = sum + a;
    }
    printf("Sum is %d\n", sum);
    return 0;
}