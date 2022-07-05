#include <stdio.h>
void star(int value);

int main()
{
    int n;
    printf("enter number you want row\n");
    scanf("%d", &n);
    star(n);

    return 0;
}

void star(int value)
{
    if (value == 1)
    {

        printf("*\n");

        return;
    }

    star(value - 1);
    for (int i = 1; i <= 2 * value - 1; i++)
    {
        printf("*");
    }
    printf("\n");
}
