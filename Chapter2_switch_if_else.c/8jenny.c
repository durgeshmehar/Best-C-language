# include<stdio.h>

int main(){
  int marks;
  printf("Enter the marks between 1-100\n");
  scanf("%d",&marks);
  switch(marks/10){
      case 10:
      case 9:
      case 8:
        printf("Your grade is A\n");
      break;
       case 7:
       printf("Your garde is B\n");
       break;

      case 6:
      printf("Your grade is C\n");
      break;
      
        default:printf("Your grade is D\n");
  }
    return 0;
}