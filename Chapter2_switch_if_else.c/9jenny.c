# include<stdio.h>

int main(){
    char ch;
    int a,b;
    printf("Enter two operents\n");
    scanf("%d %d",&a,&b);
    printf("Enter any one operator(+,-,*,/)\n");
    scanf("%c",&ch);
  
    switch(ch){
        case '+':printf("Addition of %d + %d is %d",a,b,a+b);
              break;
        case '-':printf("subtraction of %d - %d is %d",a,b,a-b);
             break;
        case '*':printf("Multiplication of %d*%d is %d",a,b,a*b);
            break;
        case '/':printf("Division of %d/%d is %d",a,b,a/b);
           break;
           default:printf("Enter valid operator\n");
    }
    return 0;
}