# include<stdio.h>
int fun(int * a){

   return 10*(*a);
}
int main(){
    int i=8;
    printf("10 times value is %d\n",fun(&i));
    return 0;
}