# include<stdio.h>

int main(){
    int i,space,k;
    for(i=1;i<=5;i++){
         for(space=1;space<=5-i;space++){
             printf(" ");
         }
         for(k=1;k<=i;k++){
             printf("* ");
         }
         printf("\n");
    }
    return 0;
}