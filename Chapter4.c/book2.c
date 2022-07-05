// armstrong number in 1-500
#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum = 0, rem, a, var, con;
    printf("Number to check armstrong\n");

    for (int i = 1; i <=500; i++)
    {
        var = i;
        a = 0;
        while (var != 0)
        {
            var = var / 10;
            a++;
        }
        con = i;
        int sum = 0;
        while (con > 0)
        {

            rem = con % 10;
            sum = sum + pow(rem, a);
            con = con / 10;
        }

        if (i == sum)
        {
            printf("Number:%d\n", i);
        }
    }
   
    return 0;
}