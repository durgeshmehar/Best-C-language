# include<stdio.h>

int main(){
    char name[20];
    char me[12]="best mother";
    printf("Enter name:");
    // scanf("%s",name);
    gets(name);
    printf("%s\n",name);
   printf("%s",me);
 
    return 0;
}