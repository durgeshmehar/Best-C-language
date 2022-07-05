# include<stdio.h>
//double pointer
int main(){
    int a=6,*ptr1,**ptr2;
    ptr1=&a;
    ptr2=&ptr1;
   printf("value odf a:%d %d %d\n",a,*ptr1,**ptr2);
    return 0;
}