#include<stdio.h>

int main(void){
  /*
     *******  JENNY LECTURE ********
   DATA TYPE IN C
  in my pc short int=2 bytes[(-32768)-(32767)],**int=4 bytes, long int=4 bytes;
**signed int=4 bytes(%d,2147483648), unsigned int=8 bytes(%u,4294967295);

    // int a;
  // printf("Your ans is %lu",sizeof(int));

  short int p;
  p=5;
  printf("Address of p is %u\n",&p);
  short int q=2;
  printf("Address of q is %u\n",&q);

**** ** **** ***** ******  ****** 
    signed int a=2147483648;
    printf("Number signed in c is %d",a);
    //(0-65535 for short int(unsigned))
    return 0;

***** [charector]***
    //for get ascii value
    //char a='b';
    //printf("ascii value os b is %d\n",a);   //output=98

    //for get charactor
    //printf("The charactor is %c\n",98);      //output=b
    %%%%%%%%%%%%%%%%%%%%%%%%%
  printf("charactor is %c\n",98);   5
   unsigned char c=-130;
   printf("charactor is %c\n",c);\
   printf("%d\n",c);
   printf("%u\n",c);
   printf("charactor is %c\n",126);

  ### ##### #### ### #### #### ###### #### ####

char=1 bite sign (-128,127) unsigned(0,255)
 char a='r';
   printf("address is %u\n",&a);
 char b='j';
   printf("address is %u\n",&b); 
 char a;
 printf("%c",98); //output=b 
 //??????????????????
     unsigned char d=-130;    //actual signed 127 i.e range(-128,127)
    printf("1st is %c\n",d);         //~
    printf("2nd is %c\n",126);       //~
    printf("third is %d\n",d);        //126,signed
    printf("fourth is %u\n",d);          //126,unsigned
    

***** [float ]*******
float=4 byte   (1 byte=8 bits)
double=8
long double=(my pc it is 16 bytes)

  int main(){
 long double a=3.566;
 printf("%u\n",&a);
  printf("Size of long double: %d",sizeof(a));  //16 bits
 long double b=6.767;
 printf("%u\n",&b);
long double t=9.767;
 printf("%u\n",&t);
 return o;}
*******************************
double salary='y';
printf("%lf\n",salary);
printf("%u\n",&salary);

double sal='z';
printf("%lf\n",sal);
printf("size of double %d",sizeof(salary));  //8bytes

printf("%u\n",&sal);

printf("for y is %c, and z is %c\n",121,122);
****************************
long double salary='y';
printf("%Lf\n",salary);
printf("%u\n",&salary);

long double sal=3.142e+2;
printf("%Lf\n",sal);
printf("%u\n",&sal);

printf("for y is %c, and z is %c\n",121,122);
***********************************
OPERATOR IN C LANGUAGE (basis of no of operents)
1) Urinary(- , ++ , -- , , ||, & , sizeof)
2) Binary(logical,comparison,arithmetic,special,bitwise)
3) Ternary
+++++++++++++++++
binary(logical)
     
int a=0,b=5,result;
result=printf("Best man") && printf("durgesh\n");
printf("%d\n",result);
printf("%d\n",a);
int a=1,b=6,m,n;
m=a-- && ++b;
printf("%d\n",m);  //now a=0 but m=1
a=5;
n=a && ++b;       //0utput false
printf("%d\n",n);
bimary(bitwise)
int a=4,b=8;
printf("%d\n",a&b);
printf("%d\n",a|b);
printf("%d\n",a^b); //alternate 0 -1=1 and 1-1 or 0-0=0
((((()))))
int a=1, b=6,result;
   
result=a--&&++b;
printf("%d\n",result);  //1 a=0,b=7
result=--a && ++b;     //0 a=-1 b=8
printf("%d\n",result);     
printf("%d\n",a);       //-1
printf("%d",b);          //8
int a=1, b=6,result;
printf("%d",a&b && b+1 || 0);
???????????
      //left shift <<,right >>,~ bitwise nor
      int a=10,c,d,e;
      c=a<<2;
      printf("%d\n",c);  //40 shortcut(10x 2 to power 2)
      printf("%d\n",a);   //10
      d=a>>2;
      printf("%d\n",d);    //2   shortcut(10/2 to power 2)
      e=~a;
      printf("%d\n",a);
      printf("%d\n",e);
*/  
/*
      int m,n,o;
      m=(a+1)<<2;  //44
      n=(a+2)>>1;    //6
      o=~(a+1);     //-12
      printf("%d\n",m);
            printf("%d\n",n);

      printf("%d\n",o); 
     LLLLLLLLLLLLLLLL */
       //special operator(comma, sizeof  )
//  int a,c,b;
//  a=5,4;
//  printf("%d\n",a);   //a=5
//  a=(5,4);
//  printf("%d\n",a);   //a=4
//  b=(printf("durgeshjjh\n"), 3);
//  printf("%d",b);
//  int a=8,b,c;
//  c=(a++,++a);
//  printf("%d\n",c);  //10
//  int c,d;
//   c=7;
//  d=(c++,++c);
//  printf("%d\n",c);   //9
//  printf("%d\n",d);   //9
// c=7;
//   int e;
//  e=c++,++c;
//   printf("%d\n",c); //9
//  printf("%d\n",e);  //7

// int c,d;
//   c=7;
//  d=(c++,++c,c>>2);
//  printf("%d\n",c);   //9
//  printf("%d\n",d);   //2   
//   d=(c++,++c,c=c>>2);
//  printf("%d\n",c);   //2
//  printf("%d\n",d);   //2 
//  int a=0,b=1,c=-1,d;
// d=--a*(5+b)/2-c++ *b;  //   -3+1
// printf("%d\n",d);
 
//  int a,d,sum;
// printf("Enter two number\n");
// scanf("%d %d",&a,&d);
// printf("Addition is %d\n",a+d);
// int r;
// r=5,9;

// printf("value of a is %d",r);

return 0;
}
  
    
