# include<stdio.h>

void fun(int a){
    printf("adress of a in function:%d \n value:%d\n",&a,a);  //adress not same but a=10
}
int main(){
      int i=10;
    printf("adreess of a:%d\n",&i);
    printf("value of a:%d\n",i); //i=10
    fun(i);
    return 0;
}