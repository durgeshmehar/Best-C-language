#include <stdio.h>

int main()
{
    int i, a, prime=1;
    printf("Enter number you want check prime\n");
    scanf("%d", &a);
    i = 2;

    while (i <= a/2)
    {

        if (a % i == 0)
        {
           prime=0;
            break;
        }
       else{i++;}
    }
    
    if(prime==0){
          printf("Number not  prime\n");
    }
    else{
        printf("prime number/n");
    }

    return 0;
}
