# include<stdio.h>

int main(){
    int i,space,k;
    for(i=1;i<=10;i++){
        for(space=1;space<=10-i;space++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");


    }
    return 0;
}