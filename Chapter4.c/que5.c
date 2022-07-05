# include<stdio.h>

int main(){
    int i=1,sum=0;
    while(i<=10){
        sum=sum+i;
        i++;
    }
    printf("sum of first ten natural number is %d\n",sum);
       return 0;
}