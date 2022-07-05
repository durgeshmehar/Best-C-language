# include<stdio.h>
// struct {   
//         int rollno;
//         float marks;
//         char name[20];
        
//     }s1,s2;
//     void main(){
//         //excess s1 s2 by upcoming procedure
//     }

struct student{        // student(structure tag) is optional but drawback is not initialize in main function by tag name.
        int rollno;
        float marks;
        char name[20];
        
    };

void main(){
    int a;
  struct student s;
  s.rollno=4;
  s.rollno=56;
  printf("%d\n",s.rollno);
    }