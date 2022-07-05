# include<stdio.h>

int main(){
    int a=5,*p;
    p=&a;
    printf("%d of a\n",&a);
    printf("%d of a\n",p);
    printf("value %d of a\n",a);
    printf("value %d of a\n",*p);
    float x,y;
    int b,*ptr;
    //ptr=&x;
      ptr=&b;
      printf("%u of b\n",ptr);
      printf("%u of a\n",&b);

    return 0;
}