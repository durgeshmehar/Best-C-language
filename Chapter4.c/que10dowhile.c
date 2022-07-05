#include <stdio.h>

void Prime(){
    printf("You enter Prime Number\n");
}
void not_prime(){
    printf("This is Not a Prime Number\n");
}

int main()
{
    int i, a, prime = 1;
    printf("Enter number you want check prime\n");
    scanf("%d", &a);
    i = 2;

    do
    {
        if (a % i == 0)
        {
            prime = 0;
            break;
        }
        i++;
    } while (i <= a / 2);


    if(a==1)
    {
        Prime();
    }
    else if (prime == 0)
    {
        if (a != 2)

            printf("Number not prime\n");
        else
            printf("Number prime\n");
    }
    
    else
    {
        printf("You enter prime number\n");
    }

    return 0;
}