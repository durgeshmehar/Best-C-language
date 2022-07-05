/*(1)function pointer
#include <stdio.h>
int sum(int a,int b){
    return a+b;
}

int main(){
    int s=0;
//   int (*ptr)(int,int)=&sum;//or
//   int (*ptr)(int a,int b)=&sum;
  int (*ptr)(int a,int b)=sum;

  s=(*ptr)(8,3);
printf("sum is %d\n",s);
    return 0;
}
*/
// (2)(*part1)application of function pointer i.e.CALLBACK FUNCTION
// #include <stdio.h>
// void sum(int a,int b){
//      printf("sum:%d\n",a+b);
// }
// void sub(int a,int c){
//      printf("sub:%d",a-c);
// }
// void display(void (*ptr) (int,int));


// int main(){
// display(sum); //display(&sum);
// display(sub); //
//     return 0;
// }

// void display(void(*ptr)(int,int)){
//     (*ptr)(5,4);//or
//     //ptr(5,4);
// }
// // (2)(*part2)application of function pointer i.e.CALLBACK FUNCTION (best option for switch case)
// #include <stdio.h>

void sum(float a, float b)
{
    printf("sum of num is : %.2f\n", a + b);
}
void sub(float a, float b)
{
    printf("Subtraction is : %.2f", a - b);
}
void mul(float a, float b)
{
    printf("Multiplication is: %.2f", a * b);
}
void div(float a, float b)
{
    printf("Division is: %.2f", a / b);
}

//  void main(){
//    int ch;
//  void  (*ptr[10])(float a,float b)={sum,sub,mul,div};
//    float a,b;
//    printf("Enter your choice as '0' means + \n '1' for -\n '2' for * \n '3' for /\n");
//    scanf("%d",&ch);
//    printf("Enter two numbers\n");
//    scanf("%f %f",&a,&b);
//    (*ptr[ch])(a,b);
//  }
// // for switch case
void main()
{
    int ch;
    float a, b;
    printf("Enter your choice as '0' means + \n '1' for -\n '2' for * \n '3' for /\n");
    scanf("%d", &ch);
    printf("Enter two numbers\n");
    scanf("%f %f", &a, &b);
    switch (ch)
    {
     case 0:
        sum(a, b);
        break;
     case 1:
        sub(a, b);
        break;
     case 2:
        mul(a, b);
        break;
     case 3:
        div(a, b);
        break;
     default:
        printf("Enter valid input\n");
    }
}