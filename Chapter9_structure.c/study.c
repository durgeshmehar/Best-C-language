# include<stdio.h>
# include<string.h>

typedef struct student{
    int roll_no;
    float marks;
    char name[20];
}vi;

struct emp{
    int roll;
    float mark;
    char school[20];
};
 
//  void pass(struct student s1){
  void pass(struct student *s1){
    //  printf("(4) %s : \nRoll no:%d \nMarks:%.3f \n",s1.name,s1.roll_no,s1.marks);
     printf("(pointer) %s : \nRoll no:%d \nMarks:%.3f \n",(*s1).name,(*s1).roll_no,(*s1).marks);
    
 }                        //down for pointer


int main(){
  /*
    vi s1,s2;
    s1.roll_no=1001;
    s1.marks=9.832;
    // s1.name="durgesh"; //wrong
    // s1.name[20]="mehar"; //wrong
  strcpy(s1.name,"Durgesh");
  printf(" %s : \nRoll no:%d \nMarks:%.3f \n",s1.name,s1.roll_no,s1.marks);
  printf("\n");
  
struct student s3;
    s3.roll_no=1004;
    s3.marks=9.66;
  //Default Name taken is "F"
  printf(" %s : \nRoll no:%d \nMarks:%.3f \n",s3.name,s3.roll_no,s3.marks);
  */

/*
  //array of structure
  struct emp s6[20];
   s6[0].roll=1006;
   s6[1].roll=1007;
  printf("\nRoll no:%d\n",s6[0].roll);
  printf("\nRoll no:%d\n",s6[1].roll);
  */
 
  //pointer for structure
  vi s1,s2;
  s1.roll_no=2001;
  s1.marks=231;
  strcpy(s1.name,"Durgesh"); //or
  // ptr->roll_no=2001;
  // ptr->marks=231;
  // strcpy(ptr->name,"Durgesh");  
  struct student *ptr=&s1;
  printf(" %s : \nRoll no:%d \nMarks:%.3f \n",(*ptr).name,ptr->roll_no,s1.marks);
  // pass(s1);
  
   
 printf("(5) %s : \nRoll no:%d \nMarks:%.3f \n",s1.name,s1.roll_no,s1.marks); //not change
pass(&s1);
printf("(6) %s : \nRoll no:%d \nMarks:%.3f \n",s1.name,s1.roll_no,s1.marks); //not change

    return 0;
}