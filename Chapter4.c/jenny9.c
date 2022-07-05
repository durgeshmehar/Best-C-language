#include <stdio.h>

int main()
{
    int i, j,num,sum=0;
    printf("Enter you want number of row\n");
    scanf("%d",&num);
    for (i = 1; i <= num; i++)
    {
        for (j =1; j<=i; j++)
        {  
            sum=sum+1;
            printf("%d",sum);
            printf(" ");
        
        }
        // sum=0;
        printf("\n");
    }
    return 0;
}