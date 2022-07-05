#include <stdio.h>

int main(){
  int n,fac=1,i;
  printf("Enter the number for get factorial\n");
  scanf("%d",&n);
  
  if(n<0){
    printf("Factorial not Exist\n");
  }
  else{
    if(n==0){
    
    printf("Factorial of %d is %d",n,1);
    }
    else{
        for(i=n;i>=1;i--){
          fac=fac*i;
        }
      printf("Factorial of %d is %d",n,fac);
    }
  }
}