#include <stdio.h>

int main()
{
    int a[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter matrix Element of %d %d\n",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Your matrix is as\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t",a[i][j]);
        }
        printf("\n");
    }
    printf("Your transpose matrix is as\n");
        for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d \t",a[j][i]);
        }
        printf("\n");
    }
    return 0;
}