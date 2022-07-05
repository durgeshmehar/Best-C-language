# include<stdio.h>

int main(){
    //continue
    int i,a,sum=0;
    printf("Enter the number\n");
    for(i=1;i<=4;i++){
        scanf("%d",&a);
        if(a<0){
            printf("Enter positve number\n");
            continue;
        }
        sum=sum+a;      //skip statement by continue

    }
    printf("Sum is %d\n",sum);
    return 0;
}