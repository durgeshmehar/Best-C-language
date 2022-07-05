#include <stdio.h>

int main()
{
    /*int str[] = {9, 8, 7, 6};
    printf("Enter number \n");
    scanf("%d", &str);
    // input =45
    printf("Your numbers are %d\n", str[0]); // 45
    printf("Your numbers are %d\n", str[1]); // 8
    printf("Your numbers are %d\n", str[2]); // 7
    printf("Your numbers are %d\n", str[3]); // 6
    */

    int str[5];
    printf("Enter the element os array(number)\n");
    for(int i=0;i<5;i++)
    {
    scanf("%d",&str[i]);
    }
    for(int i=0;i<5;i++)
    {
    printf("your number is %d\n",str[4-i]);
    }
    //or
    // for(int j=4;j>=0;j--)
    // {
    //     printf("Number %d\n",str[j]);
    // }
    return 0;
}