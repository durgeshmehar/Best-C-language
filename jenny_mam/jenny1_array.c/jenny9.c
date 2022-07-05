#include <stdio.h>

int main()
{
    int a[3][3] = {{1, 2, 3},
                   {4, 5, 6},
                   {7, 8, 9}},
                   
        b[3][3] = {{3, 0, 2},
                   {6, 1, 3},
                   {4, 2, 1}}, i, j, k, c[3][3];

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            int sum = 0;
            for (k = 0; k < 3; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
           printf("%d \t",sum);
            
        }
        printf("\n");
    }

    return 0;
}