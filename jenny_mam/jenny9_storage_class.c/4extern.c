//extern-default value=0,ram store,scope-only global,lifetime-till end of program
//it used in variable and function also.
/*it used to acsess variable from other file also same file in different block (compiler assume already define i.e. saving memory)
extern int x-->declaration
extern int 10;-->declaration & space alocation=defination*/
# include<stdio.h>
# include "3static.c"
extern void display();
extern int y;
extern void fun2();
extern int a;

void fun1();

int main(){
    printf("another function y:%d\n",y);

    display();
    a++;
    printf("main a:%d\n",a);
    fun1();
    fun2();
  
    printf("another function y:%d\n",y);
 
}

void fun1(){
 int a=2;
    a++;
    printf("fun1 a:%d\n",a);
}
void fun2(){
    printf("Hii from fun 2\n");
}

int a=10;
