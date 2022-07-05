/*     int a,b,c,d;
     a=b=c=-1;
printf("Value of a b is %d %d\n",a,b);
d=++a && ++b || c;
printf("%d\n",d);    //1
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    char ch1='x';
   char ch2='X';
   int i=2;
   float f1=++ch1 +i;
   float f2=++ch2 +i;
   printf("\n value is %f %d %c",f1,ch1,ch1); //123 121 y //++ not added due to its add in  charactor

   printf("\n value is %f %d %c",f2,ch2,ch2); //91 89 Y
@@@@@@@@@@@@@@@@@@@@@@@@@@@
   int a,b;
  printf("Enter number a & b:");
  scanf("%d %d",&a,&b);
  if(a==1){
      printf("\n you are good");
  };

  if(b==2){
      printf("\nYou are smart\n");
  }
###################################

 int a,b,c,d;
 printf("Enter a,b for a+ib\n");
 scanf("%d %d",&a,&b);
  printf("Enter c,d for c+id\n");
 scanf("%d %d",&c,&d);
int sum1=a+c;
int sum2=b+d;
printf("Sum of complex number is %d+(%d)i\n",sum1,sum2);
$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$
int fun(int a,int b){
    if (b==0)
    {
      return a;
    }
    else
    {
      return fun(b , a % b);
    }

}
int main()
{
  int a, b,hcf;
  printf("Enter two number \n");
  scanf("%d", &a);
  scanf("%d", &b);
  hcf=fun(a,b);
  printf("HCF of GCM is %d\n", hcf);
  printf("LCM is %d\n", (a * b / hcf));
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
      printf("Durgesh\n");
   int i,j;
   for(i=1,j=1;i<9,j<9;j++);
   {
        printf("%d %d\n",i,j);
        i++;
   }
   printf("IIII\n");
*************
 int i,j,k;
   for(i=1,j=0,k=3;i<=5,j<=6,k>1;i++,j++,k--);
   //imp concept that increse/decrease value due to condition false so careful
   {
        printf("%d %d %d\n",i,j,k);
   }
   &&&&&&&&&&&&&&&&&
       int num,i;
   printf("Enter the number for table\n");
   scanf("%d",&num);
   for(i=1;i<=10;i++){
        printf("%d X %d =%d\n",num,i,num*i);
   }
   printf("**** ENDING TABLE *****");
*************
  int i = 0;
   while (++i);

    printf("%d\n", i);
    i++;
  printf("End");
   *******************
  int i = 0;
  char ch = 'a'; // 97
  while (ch || i==1)
  {
    printf("%c | %d | %d\n", ch,ch,i+1);   //159 outputs
    ch++;
    i++;
  }
&&&&&&&&&&&&&&&&&&&
{
   int a,b,c,number,i;
    printf("Enter the number at how many times want fibonacii series\n");
    scanf("%d",&number);
    a=1;
    b=2;
    printf("%d ",a);
    printf("%d ",b);
    for(i=3;i<=number;i++){
      c=a+b;
      a=b;
      b=c;
      printf("%d ",c);
    }
  ____________________
  int i=2147483641;
   while(i!=-2147483646){
       printf("%d\n",i);
       i++;
   }
   printf("!!!!!!!!!!!!!!\n");
   printf("%d\n",i);
*/
