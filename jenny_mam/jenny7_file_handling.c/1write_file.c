// creat,open,read,write,close the file done by c language by pointer
/*typedef struct {
    int a;
    float b;        //pointer and buffer inside this
    char c;
    double d;
    }FILE;  */   // Already define this in stdio so use directly as file datatype

 //"fopen("file name","mode") defined in stdio.h it create file type of pointer & it store address,  >>>>fclose(pointer name)>>>release buffer memeory so closed file.
// mode type(r,w,a,r+,w+,a+)
//fprintf-write,fputs-write string,fputc-write char,,fscanf-read,,fgetc-read char,,fgets-read string,
//in w mode not output in terminal,creat file automatically
//write into a file in c
# include<stdio.h>

int main(){
    FILE * fp ;
    int a=2500;
    char c='d';
    char str[25]="Jenny madam";
    fp=fopen("3.txt","w");
    
    //to write chractor,string,integer in file 
    fputc(c ,fp);
    fputs(str,fp);
    fprintf(fp,"%d %s",a,str);
    printf("succesfully\n");
    fclose(fp);
    return 0;
}   
//r mode get output at terminal
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *ptr=NULL;

    char str[25];
    int a=10;
    ptr = fopen("2.txt", "w");
    if (ptr == NULL)
    {
        printf("Eror\n");
        exit(1);
    }
    printf("Enter string\n");
    fgets(str,25,stdin);
    fputs(str,ptr);
    */

//     for(int i=0;i!=strlen(str);i++){
//         fputc(str[i],ptr);
//     }
  
//     fprintf(ptr,"%d %s ",a,str);
//     fclose(ptr);
//     return 0;
// }     