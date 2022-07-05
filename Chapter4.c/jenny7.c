#include <stdio.h>

int main()
{
  int i, j = 1;

  for ( ;j <= 10; j++)
  {
    int i = 1;
    do
    {
      printf("*");
      i++;
    } while (i <= 8);
    printf("\n");
  }
  return 0;
}