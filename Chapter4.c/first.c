# include<stdio.h>

int main(){
    /*Loop control instruction
    Types of loop
    1)while 2)do while 3)for loop
*********************
while loop
    int a=1;
    while(a<=10){
        printf("Hii %d\n",a);
         a++;
    }
    ###############
do while loop
    int a,i=1;
    printf("Enter the last number you want for natural number\n");
    scanf("%d",&a);
    printf("Number is\n");

    do{
    printf("%d\n",i);
    i++;
    }while(i<=a);
    ^^^^^^^^^^^^^^^^^^^^^^^^^
for loop
 int a,b,i,j;
 printf("form rectangle of * by m X n\n");
 scanf("%d %d",&a,&b);
 for(i=1;i<=b;i++){
     for(j=1;j<=a;j++){
     printf("*");}
     printf("\n");
 }
 &&&&&&&&&&&&&&&&&&&&&&&
break,continue
int skip=5,i=0;
while(i<=10){
    i++;
    if(i==skip){
        continue;
    }
    else{
        printf("Number is %d\n",i);
    }
}
//****************************
*/



    return 0;
}