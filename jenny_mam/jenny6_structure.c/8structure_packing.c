// #include<stdio.h>
// // #pragma pack(1)
// typedef struct student
// {
//     char name[9];
//     int roll_no;
//     float marks;
//   //  double marks;
// }st;     
// int main(){
//   st s1={"durgesh",34,56};

//   printf("size of struct is %d\n",sizeof(s1));   //without pragama size=20,by using pragma size=17
//   //i.e 4 bits filled at time.
//     return 0;
// }

//****problem****
#include<stdio.h>
#pragma pack(1) //No need pragma in this question.
struct question
{
  int a;
  float b;
  int c;
   //double marks;
};     
int main(){

  struct question q1={1,2,3};
  printf("Que 1 is %d %f %d\n",q1.a,q1.b,q1.c); //1 2.000 3
  struct question q2={.c=1,.b=2,.a=3}; //designeted inisalization
  printf("Que 2 is %d %f %d\n",q2.a,q2.b,q2.c); //3 2.000 1

  printf("size of struct is %d\n",sizeof(q1));
    return 0;
}
