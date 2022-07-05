#include <stdio.h>
#include <stdlib.h>
char fun1()
{   char c;
    printf("Enter charactor\n");
    scanf("%c", &c);    //prevent buffer input use space before %c
    return c;
}
char fun2()
{   char d;
    printf("Enter charactor please\n");
    fflush(stdin);
    scanf(" %c", &d);//prevent buffer input use space before %c or fflush(stdin);
    return d;
}

int main()
{
    char c;
    c = fun1();
    printf("charactor: %c\n", c);
    char d;
    d = fun2();
    printf("charactor is %c\n", d);
    return 0;
}
