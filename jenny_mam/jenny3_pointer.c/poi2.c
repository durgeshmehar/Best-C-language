#include <stdio.h>

int main()
{
    int a = 5, b = 8;
    printf("%u\n", &a);
    printf("%u\n", &b);
    int *p, *q;
     p = &a;
    q = &b;
    int c = *q;
    *p = 20;
    printf("%u\n", p);
    printf("%u\n", q);
    printf("address of p %u \n", &p);
    printf("address of q %u \n", &q);
    printf("Value of a is %d \n", *(&a));
    printf("address of a is %u \n", p);
    printf("%d\n", c);
    return 0;
}