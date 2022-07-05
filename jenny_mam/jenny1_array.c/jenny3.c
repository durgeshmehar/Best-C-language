#include <stdio.h>

int main()
{
    int arr1[5], arr2[5], sum[5];
    printf("Enter 5 numbers for first array\n");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Enter 5 numbers for second array\n");
    for (int j = 0; j < 5; j++)
    {
        scanf("%d", &arr2[j]);
    }
    for (int k = 0; k < 5; k++)
    {
        sum[k] = arr1[k] + arr2[k];
    }
    for (int k = 0; k < 5; k++)
    {
        printf("Array element is %d is %d.\n", k + 1, sum[k]);
    }
    return 0;
}