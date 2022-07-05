/*(*)call by value 
# include<stdio.h>
void fun(int x,int y){
    x=5;
    y=6;
    printf("x:%d & y:%d\n",x,y);
}

int main(){
     int x=4;int y=7;
    fun(x,y);
    printf("x:%d & y:%d\n",x,y);
    return 0;
}
*/

/*(**) call by reference
# include<stdio.h>
void fun(int *x,int *y){
    *x=8;*y=3;
    printf("x:%d & y:%d\n",*x,*y);

}

int main(){
    int x=5,y=6;
    fun(&x,&y);
    printf("x:%d & y:%d\n",x,y);
    return 0;
}
*/
/*
# include<stdio.h>
float fun(int x,float y){
float sum=0;
return sum=x+y;
}

int main(){
    int x=5;
    float y=7.5;
    printf("sum:%f\n",fun(x,y));
    return 0;
}
*/

/*(****)prime or not */
#include <stdio.h>
int prime(int n);

void main()
{
    int n, m;
    printf("Enter the number\n");
    scanf("%d", &n);
    m = prime(n);
    if (m == 1)
    {
        printf("Number %d is not prime\n", n);
    }
    else
    {
        printf("Prime number\n");
    }
}

int prime(int n)
{
    int flag = 0; // prime
    if(n==0 || n==1){
        flag=1;          //not prime
    }
    else if(n==2){
        flag=0;          //prime
    }
    for (int i = 2; i <= n / 2; i++)
    {
            if (n % i ==0)
            {
                flag = 1;// not prime
                break; 
            }
    }
    return flag;
}          
