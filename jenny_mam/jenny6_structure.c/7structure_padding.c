//memory is now word ADRESSSAble to acseess whole word in sigle cpu cycle
# include<stdio.h>
typedef struct student{
    //before
    // int rollno;
    //     char name[20];
    //         float marks;

  //after learn structure padding
    int rollno;
    float marks;
    char name[20];
}st;
int main(){
    printf("%d\n",sizeof(int));//4
    printf("%d\n",sizeof(char));//1
    printf("%d\n",sizeof(float));//4

    st s={10,98.6,"jenny"};       //typedef done as "struct student=st"
    printf("Student Information Is As\n");
printf("%d %s %f\n",s.rollno,s.name,s.marks);
    return 0;
    
}