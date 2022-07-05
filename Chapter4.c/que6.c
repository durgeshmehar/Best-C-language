# include<stdio.h>

int main(){
    int i=1,sum=0;
//   for(i=1;i<=10;i++){
//       sum=sum+i;
//   }
do{
    sum=sum+i;
    i++;

}while(i<=10);
        printf("Sum of 1-10 is %d\n",sum);

    return 0;
}