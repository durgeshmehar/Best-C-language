# include<stdio.h>
int sum(int value);

int main(){
int num;
printf("enter number upto which want natural number sum\n");
scanf("%d",&num);
 printf("Sum of upto %d is %d\n",num,sum(num));

    return 0;
}
int sum(int value){
    int c;
   if(value==1){
       return 1;
    
   }
else{
 return sum(value-1)+value;
}
 
}
