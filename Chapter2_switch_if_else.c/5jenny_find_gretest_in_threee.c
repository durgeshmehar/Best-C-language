#include <stdio.h>
int main()
{
    int a, b, c;
    // shudhanshu mishra
    printf("Enter the first ,second and third number \n");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("the first number %d is greater than %d %d\n", a, b, c);
        }
        else
        {
            printf("the third number %d is greater than %d %d\n", c, b, a);
        };
    }
    else
    {
        if (b > c)
        {
            printf("the second number %d is greater than %d %d\n", b, a, c);
        }
        else
        {
            printf("the third number %d is greater than %d %d\n", c, a, b);
        };
    };

return 0;
}