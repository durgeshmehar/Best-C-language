/*#include <stdio.h>
void sum(void);
// void sub(void);

int main()
{
    sum();
    sum();

    return 0;
}

  void sum()
  {


        int a, b, sum = 0;
        printf("Enter thr number addition\n");
        scanf("%d %d", &a, &b);
        sum = a + b;
        printf("Sum=%d\n", sum);
    
    // sub();
  }
  // void sub()
  // {
  //   int a, b, sub = 0;
  //   printf("Enter thr number for subtraction\n");
  //   scanf("%d %d", &a, &b);
  //   sub = a - b;
  //   printf("Sub=%d\n", sub);
  // */

#include <stdio.h>
int sum(void);
int sub(void);

int main()
{
    sum();

    return 0;
}

int sum()
{

    int a, b, sum = 0;
    printf("Enter thr number addition\n");
    scanf("%d %d", &a, &b);
     sum = a + b;
    printf("Sum=%d\n", sum);

    printf("sub is %d\n",sub());
}
int sub()
{
    int a, b, sub = 0;
    printf("Enter thr number for subtraction\n");
    scanf("%d %d", &a, &b);
    sub = a - b;
    return sub;
}