#include <stdio.h>
#include <string.h>

int main(int arg, char *arr[])
{

    printf("Hellow, ");
    for (int i = 1; i < arg; i++)
    {
        if (arg > 1)
        {
            printf("\ni:%d\n", i);
            printf("%s ", arr[i]); // or option 1
            // return 1;
        }
    }
    if (arg == 1)
    {
        {
            printf("mam\n");
            // return 0;
        }
    }
    printf("WAHH BETE");
}

// **OPTION 1**
// int j = 0;
// while(arr[1][j]!='\0'){
//     j++;
// }
// for (int i = 0; i < j; i++)
// {
//     printf("%c",arr[1][i]);
// }
