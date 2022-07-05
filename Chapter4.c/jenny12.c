#include<stdio.h>

int main(){
//    int i,space,k,num;
//    printf("Enter you want rows\n");
//    scanf("%d",&num);

//    for(i=1;i<=num;i++){
//        for(space=1;space<i;space++){
//            printf(" ");
//        }
//         for(k=1;k<=2*num-(2*i-1);k++){
//             printf("*");
//         }
//         printf("\n"); }
    
int i,space,k,num;
  printf("Enter you want rows\n");
    scanf("%d",&num);
    for(i=num;i>=1;i--){
        for(space=1;space<=num-i;space++){
            printf(" ");
        }
        for(k=1;k<=2*i-1;k++){
            printf("*");
        }
        printf("\n");

    }
    
    return 0;
}