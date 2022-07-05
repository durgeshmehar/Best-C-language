# include<stdio.h>

struct student{
    int rollno;
    char name[20];
    float marks;
}s1={1,"jenny",98.67};
int main(){
         //struct student s2={2,"kalpana",93.34};
         //struct student s3={3,"durgesh",98.34};
         //printf("%f",s1.marks);
struct student s2;
struct student s3={3,"durgesh",98.34};
s2=s3;
struct student s4;

printf("Enter rollno,name & marks for s4\n");
         // scanf("%d",&s4.rollno);
         // scanf("%s",&s4.name);
         // scanf("%f",&s4.marks);
scanf("%d %s %f",s4.rollno,s4.name,s4.marks);
printf("s4: %d %s %f",s4.rollno,s4.name,s4.marks);
    return 0;
}