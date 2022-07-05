#include <stdio.h>

int main()
{
    int i, a, prime=1;
    printf("Enter number you want check prime\n");
    scanf("%d", &a);
    for (i = 2; i <= a/2; i++)
    { 
        if (a % i == 0)
        {  prime=0;
            break;
        }
    }
    
    if(prime==0){
       
            printf("Number is not prime\n");
      
    }
     else{
           printf("prime number\n");}
  
 
    return 0;
}