#include <stdio.h>
float avg(int a,int b,int c);

int main(){
    int a,b,c;
    printf("Enter a first number\n");
   scanf("%d",&a);
printf("Enter a second number\n");
   scanf("%d",&b);
    printf("Enter a third number\n");
   scanf("%d",&c);
   printf("Avarage is %f\n",avg(a,b,c));

    return 0;
}
float avg(int a,int b,int c){
  float result;
  result=(float)(a+b+c)/3;
  return result;
}
