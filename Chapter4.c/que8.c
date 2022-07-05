# include<stdio.h>

int main(){
    int pr=1,i,a;
    printf("Enter number you want factorial\n");
    scanf("%d",&a);
    for(i=a;i>0;i--){
        pr=pr*i;
    }
    printf("Factorial of number %d is %d\n",a,pr);

    return 0;
}