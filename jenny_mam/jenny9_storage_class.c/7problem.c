/*1)# include<stdio.h>
  int a;     //extern
int main(){
    printf("a=%d",a);
    return 0;
}          */

/*# include<stdio.h>
 
 int fun(){
     static int num=16;
     return num--;     
 }

int main(){

    for(fun();fun();fun()){    //12 9 6 3 0
        printf("%d\n",fun());
    }
    return 0;
} */
/*(3)
# include<stdio.h>
int i=5;
int main(){
    extern int j;
    printf("i,j:%d %d\n",i,j);
    // int j=20;  //wrong ,not find inside the block by extern
    return 0;
}
 int j=20;  //right  */

 # include<stdio.h>
 
 int main(){
     printf("Hii\n");
register int data=10;  
int a=5;
int *ptr=&a;
// ptr=&data;   //error
*ptr=6;
printf("%d\n",*ptr);
printf("%d",data);
   
 return 0;
 }