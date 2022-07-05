// a+ mode (reading/appending)
//it can creat new file also
//already pointer in first position so no need to use rewind but if first append //////anything then curser at last position so then use rewind() function.
// for reading pointer must at first position so use rewind function & for appending is at last position.
//second time rewind() functin is used
// #include<stdio.h>
// #include<stdlib.h>

// int main(){
//     FILE *fp=NULL;
//     fp=fopen("2.txt","a+");
//     if(fp==NULL){
//         printf("Eror\n");
//         exit(1);
//     }
//     char str[30];
//     fputs(" Durgesh",fp);
//     char ptr[25];
//     rewind(fp);
//     while(!feof(fp)){
           
//     printf("%s",fgets(ptr,20,fp));

//     }

//     return 0;
// }
#include<stdio.h>
#include<stdlib.h>

int main(){
    FILE *fp=NULL;
    fp=fopen("2.txt","a+");
    if(fp==NULL){
        printf("Eror\n");
        exit(1);
    }
    char str[30];
   
    char ptr[25];
    
    while(!feof(fp)){
           
    printf("%s",fgets(ptr,20,fp));

    }
     fputs(" Durgesh",fp);
     printf("Enter\n");
     gets(str);
     fputs(str,fp);
    return 0;
}
