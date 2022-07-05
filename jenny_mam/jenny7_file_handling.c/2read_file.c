#include <stdio.h>
#include <stdlib.h>
#include <string.h>        
int main(){
    FILE *fp=NULL;
    fp=fopen("1.txt","r");
       if (fp == NULL)
    {
        printf("Eror\n");
        exit(1);
    }
    //(1) 
     while(!feof(fp)){  //end of file
    char ch;
    ch=fgetc(fp);
    printf("%c",ch);} 
       

   
    //No use of this fputs("zphigh school",fp);
     char str[20];
     while(!feof(fp)){
          fgets(str,18,fp);
         printf("%s",str); 
    }

  
   
 fclose(fp);
}