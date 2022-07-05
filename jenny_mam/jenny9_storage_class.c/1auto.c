//variable asssociated with 1)type(i.e.datatype) 2)storage class

// for ex.(int a;) storage class tell us-default value it take,location(ram or resister),scope(where to access)(type:block,function/method,program),lifetime(till when) {{{{}}}} 

//(storage_class int a;)=(auto int a;) The 4 type of storege clasees:1)automatic 2)register 3)extern 4)static [default type:auto]

// scope (block...{//variable value lifetime upto inside the function  })
/*
#include <stdio.h>
void fun1();
auto int a=50 ;  

// printf("%d\n",a);       //wrong   //(1) (program scope) global declaration
int main(){
 int a = 20;    
    fun1();
    {
        int a = 10;
        printf("Inside block %d\n", a);
    }
    {                 //(2) block scope
        printf("a:%d", a++);
    }
    return 0;
}
void fun1()
{                      //(3) function scope
    int a = 23;
    printf("Inside user fun a:%d\n", a);
}  
*/
//1)auto storage class ---> (Location:store in ram)(only function,block scope not program/global scope)
/*
# include<stdio.h>
 
 

int main(){
    auto int a=10;
    {
        auto int a;
        printf("(1) Value:%d\n",a);
    }
    printf("(2) Value:%d\n",a);
   
    return 0;
}
*/