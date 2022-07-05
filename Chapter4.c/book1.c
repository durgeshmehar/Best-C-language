#include <stdio.h>

int main(){
    int num,sum=0,rem;
     printf("Number to check armstrong\n");
     scanf("%d",&num);    
       for(int temp=num;temp!=0;temp=temp/10){

           rem=temp%10;
           sum=sum+rem*rem*rem;

       };
      if(num==sum && num!=0){
          printf("Yes your Number is armstrong %d",num);
      }
     else if(num==0){
           printf("your Number is armstrong\n");
       }
       else{
           printf("sorry,not a armstrong\n");
       }
    return 0;
}