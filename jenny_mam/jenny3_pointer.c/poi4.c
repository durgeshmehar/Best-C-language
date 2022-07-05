#include <stdio.h>
#include <stdlib.h>

//(3)(Dagling pointer)
int *fun(){
   static int a=5; //right,global scope
    // int a=5; //output same for short time
    int *p=&a;

    return p;
}

int main()
{  /*
    int a[6] = {1, 3, 5, 6, 4,9};
    // int *ptr = a;
    int *ptr = &a[0];
    for (int i = 0; i < 6; i++)
    {
        printf("%d\n",*(a+i));         //a[i]
    }
    char s[20]="durgesh";
    char *p=&s[0];
   for (int j = 0; j < 7; j++)
    {
        printf("%c",*(p+j));         //a[i]
    }
*/
  /***Arithmatic in pointetr
    int a[]={5,7,89,9,44,76};
    int b[]={8,909,78,6,5,4};
    int *p=&a[0];
    int *q=&a[5];
    // int *q=&b[0];
    printf("p:%u\n",p);
    printf("q:%u\n",q);
int m=q-p;
printf("%d\n",m);
    int a[]={5,7,89,9,44,76};
    int *p=&a[4];
    printf("%d\n",*p);   //44
printf("%d %d %d \n",*--p,*--p,*--p); // 7 89 9
p=&a[4];    
printf("address of p :%u\n",p);
printf("%d\n",--(*p)); //43
printf("%d\n",*p);     //43
printf("%d\n",(*p)++); //43
printf("%d\n",++(*p)); //45
printf("%d %d \n",*p++,*p++); // 76 45
int *q=&a[0];
printf("%d %d %d\n",*--q,*--q,*--q); //garbage value */

/* int a[]={10,11,-1,56,67,5,4};
int *p,*q;
p=a;
printf("%d\n",*p);     //10
printf("%d %d %d\n",(*p)++,*p++,*++p);  //    -1 11 11
printf("%d",*p);  //0
q=p+3;                      
printf("%d \n",*q-3);    //2
printf("%d \n",*--p+5);  //16
printf("%d \n",*p+*q);    //16
int a[]={10,11,-1,56,67,5,4};
 int *p,*q;
 p=a;
 q=&a[0]+3;
 printf("%d %d %d\n",(*p)++,(*p)++,*(++p)); //   12 11 11
printf("%d\n",*p); //13
printf("%d\n",(*p)++); //13
printf("%d\n",(*p)++); //14   
printf("%d\n",(*p)); //15 
q--;
printf("%d\n",(*(q+2))--); //67
printf("%d\n",*(p+2)-2);    //54

for(int i=0;i<7;i++){
printf("%d ",a[i]);
}
printf("\n%d\n",*p); //15
printf("%d\n",*(p++));    //15
printf("%d\n",*(p++-2)-1);   //9 
*/

 /* int a=11;
const int *p=&a;
//  int *p=&a;
a=10;
printf("%d\n",a);
printf("%d\n",a+2);
printf("%d\n",*p);
*/
/*
char str[]="welcome to jenny's lectures";
// char str[]="w lcome to jenny's lectures";
char *ptr=str;
printf("%c\n",*ptr);    //w
printf("%c\n",*ptr+3);    //z
printf("%c\n",*(ptr++ +1));   //e
printf("%c\n",*((ptr-- +5)-1)+3);//p
printf("%c\n",*(++ptr+10)+3);//J-->m
printf("%c %c %c\n",*++ptr,*++ptr,*--ptr);//  e  e w
*/

//**Void pointer(generic pointer)
/*int a=5;
char c='a';
float f=6.7767;
void *p;
p=&a;
printf("%d\n",*(int*)p);
p=&c;
printf("%c\n",*(char*)p);
p=&f;
printf("%f\n",*(float*)p);
float *q=&f;
printf("%f\n",*q);
*/

//&&&null pointer
/*int *str=(int*)malloc(sizeof(int));   //USE for malloc dynamic memory allocation
*str=20;
printf("%d & %u\n",*str,str);

int *ptr=NULL; //CANNOT DEREFERENC null pointer,Change value to 0.
int *pt;
if(ptr==pt)
    printf("Both same\n");
else
    printf("Not same\n");
    */

//***dangling pointer in c
//(1)
/*int *ptr=(int *)malloc(sizeof(int));
*ptr=20;
printf("%d ,%u\n",*ptr,ptr);  //20 ,11080816
free(ptr);
printf("%d , %u\n",*ptr,ptr); //11104672 , 11080816
*/
//(2) 
/*
int* ptr;
{   int a=5;
    ptr=&a;
    printf("a:%d\n",*ptr);
    printf("adress:%d\n",ptr); }

    printf("value of a:%d\n",a);//Error..local variable so eror not seen in output.
    printf("value of a:%d\n",*ptr); //Jenny Mam told.
    printf("adress:%d\n",ptr); 
    */
//(3)
int *ptr=fun();
printf("a:%d\n",*ptr);  //a=5 see above main for remaining portion.

    /* **Wild pointer*/
   // int *ptr;  //wild pointer is uninitiallised pointer


 return 0;
}
