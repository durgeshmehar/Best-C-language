// # include<stdio.h>

// int main(){
//     char *ptr="durgesh";
//     printf("%s\n",ptr);
    
//     return 0;
// }
#include <stdio.h>
int main (int argc, char *argv[])
{
    int i;
    printf ("\n total no. of arguments:%d", argc);
    for (i = 0; i < argc; i++)
        printf ("\n %d arguments: %s", i + 1, argv[i]);
    return 0;
}