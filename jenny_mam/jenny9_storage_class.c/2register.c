//register storage class-->(Locatin:store in cpu register)(only function,block scope not program/global scope)

//if available space is not in register then it becomes automatic auto storage class in ram but we dont know where in memory or cpu register
//we cant do pointer to register(not memory location of resister in memory loation)
//in register storage class we only store frequent variable.

# include<stdio.h>

int main(){
  register int i,sum=0;

//   int *ptr=&i;    //we cant do it 
//   printf("i:%d\n",*ptr); //not output

    for(i=0;i<10;i++){
        sum=sum+i;
    }
    printf("sum:%d\n",sum);
    return 0;
}