# include<stdio.h>

int main(){
   int a=3;
   int b=4;
    printf("%d %d %d\n",a,++a,a++);  //5 5 3
    /*printf prints in sequnce(Left-right) 
       the value but execute code from right to left   */
    //output is  5 5 3
    return 0;
}