#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{    char ch;
     char s[20];
     char sen[30];
     scanf("%c",&ch);
     scanf("%s",s);
    //  fflush(stdin);    //or
     scanf("\n");
     scanf("%[^\n]",&sen);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    printf("%c\n%s\n%s",ch,s,sen) ;
    return 0;
}