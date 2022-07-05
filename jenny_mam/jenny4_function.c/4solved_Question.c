 # include<stdio.h>
 int r(){
    static int num=10;
    return num--;

 }
 
 int main(){
     for(r();r();r())
     {
         printf("number is %d\n",r());
     }
     return 0;
 }
 //8
 //5
 //2