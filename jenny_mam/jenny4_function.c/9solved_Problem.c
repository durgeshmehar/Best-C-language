# include<stdio.h>
void fun(int*p,int*q){
    *p=*p+*q;
    *q=*p-*q;
    *p=*p-*q;
}
int i=0,j=1;

int main(){
    printf("Before:%d %d\n",i,j);
    fun(&i,&j);
    printf("Revert values without temp variable:%d %d\n",i,j);
    return 0;
}