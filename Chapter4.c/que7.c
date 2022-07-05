# include<stdio.h>

int main(){
    //sum of number occuring in multiplication table of 8
    int sum=0,i;
    printf("Multiplication table of 8\n");
    for(i=1;i<11;i++){
        printf("%d X %d =%d\n",8,i,8*i);
        sum=sum+(8*i);
    }
    printf("Sum is %d\n",sum);

    return 0;
}