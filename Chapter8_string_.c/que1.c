# include<stdio.h>
# include<string.h>

int main(){
   char str1[20];
   char str2[20];
   char ch;
   int i=0;

   printf("Enter string\n");
   scanf("%s",str1);

    printf("Enter\n");
    fflush(stdin);
    scanf("%s",str2);

   printf("%s %s\n",str1,str2);
   printf("String compare is %d\n",strcmp(str1,str2));
   return 0;
}
