#include <stdio.h>

int main(){
    int a=10,*ptr;
    printf("adreess of a:%d\n",&a);
    ptr=&a;
    printf("adreess of a:%d\n",&a);
    printf("adreess of a:%d\n",ptr);
    printf("value of a:%d\n",*ptr);
 
}