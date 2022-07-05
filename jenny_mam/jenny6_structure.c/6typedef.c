# include<stdio.h>
typedef struct student{
    int rollno;
    char name[20];
    float marks;
}st;
   //---MEANING OF TYPEDEF---
   //struct student=st
int main(){
    printf("%d\n",sizeof(int));//4
    printf("%d\n",sizeof(char));//1
    printf("%d\n",sizeof(float));//4

    st s={10,"jenny",98.6};       //typedef done as "struct student=st"
    printf("Student Information Is As\n");
printf("%d %s %.2f\n",s.rollno,s.name,s.marks);
    return 0;
    
}