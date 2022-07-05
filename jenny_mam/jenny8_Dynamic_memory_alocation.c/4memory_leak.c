# include<stdio.h>
# include<stdlib.h>

int sum(){
    int sum=0;
    int *ptr=(int *)malloc(2*sizeof(int));
    printf("Enter first number\n");
    scanf("%d",ptr);
    printf("Enter second number\n");
    scanf("%d",(ptr+1));

    sum=*ptr+*(ptr+1);
    //we need to free memory ,if not then malloc creat more merory whenever function run for every loop
    free(ptr);
    return sum;
}

int main(){
    int ch=1;
    while(ch){
        
        printf("sum :: %d\n",sum());
        printf("continue\n");
        scanf("%d",&ch);
    }
    return 0;
}