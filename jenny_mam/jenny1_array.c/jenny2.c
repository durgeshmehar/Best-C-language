#include <stdio.h>

int main()
{
    int n;
    printf("Enter how many number you want\n");
    scanf("%d", &n);
    int num[n], even_sum, odd_sum;
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d number\n", i + 1);
        scanf("%d", &num[i]);
    };
    for (int i = 0; i < n; i++)
    { int m=num[i] % 2;
        if(m==0){
            even_sum = even_sum + 1;
        }
        else
        {
            odd_sum = odd_sum + 1;
        }
    };
printf("You enter %d even and %d odd number\n",even_sum,odd_sum);
    return 0;
}