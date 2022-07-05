#include <stdio.h>
int *pass(int []);


int main(){
    int str[]={1,2,3,4,5};
//Here str is constant pointer of itself so it cannot modified its string.
    int *ptr;
    ptr=pass(&str[0]);  //or pass(str)
    ptr=ptr+1;
    str[4]=56;
   printf("Element is %d\n",str[4]);
   printf("Element is %d\n",*ptr);
   return 0;
}

int *pass(int *str){
  str=str+2;
  return str;
}