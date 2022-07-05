#include <stdio.h>

int main(){
    int a;
 printf("Enter number upto at last 0\n");
   
   while(1){
      scanf("%d",&a);
       if(a==0){
           printf("Thanks\n");
           break;
       }
       else{printf("please input zero\n");}
   }
    return 0;
}