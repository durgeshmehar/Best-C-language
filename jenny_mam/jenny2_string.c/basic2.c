#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{    char ch;
     char s[101];
     char sen[101];
     scanf("%c",&ch);
     fflush(stdin);
     scanf("%s",s);
     fflush(stdin);
     scanf("%[^\n]",sen);    //%[^\n]

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    printf("%c\n%s\n%s",ch,s,sen) ;
    return 0;
}