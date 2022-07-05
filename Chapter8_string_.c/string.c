# include<stdio.h>
# include<string.h>

int main(){
    char str[9]="durgesh",c;
    int count=0;
    printf("%d\n",strlen(str));
    char *ptr=str;
    while(*ptr!='\0'){
        count++;
        ptr++;    }
    printf("sum:%d\n",count);


    char source[15]="durgeshmehar";
    char target[30];
    strcpy(target,source);
    printf("%s\n",target);

   char s1[15]="Hii ";
   char s2[]="durgesh!";
   strcat(s1,s2);
   printf("%s\n",s1);
   
   char s3[15]="Hii ";
   char s4[]="durgesh!";
   int val=strcmp(s3,s4);
   printf("compare:%d\n",val);
return 0;
}
