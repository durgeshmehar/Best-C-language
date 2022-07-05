# include<stdio.h>

int main(){
     int pr=1,i,a;
    printf("Enter number you want factorial\n");
    scanf("%d",&a);
    i=a;
    while(i>0){
        pr=pr*i;
        i--;
    }
        printf("Factorial of number %d is %d\n",a,pr);

    return 0;
}