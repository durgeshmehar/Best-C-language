#include<stdio.h>

int main(){
    int a,sum;
    printf("Enter +ve number\n");
    do{
    scanf("%d",&a);
     if (a < 0)
        {
            break;
        }
        sum = sum + a;
    }while(1);
    printf("Sum is %d\n", sum);
    return 0;
}

// #include<stdio.h>

// int main(){
//     int a,sum;
//     printf("Enter +ve number\n");
//     while(1){
//     scanf("%d",&a);
//      if (a < 0)
//         {
//             break;
//         }
//         sum = sum + a;
//     }
//     printf("Sum is %d\n", sum);
//     return 0;
// }