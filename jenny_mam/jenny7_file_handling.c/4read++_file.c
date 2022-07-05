// r+ mode(*writing/reading,if file not exit then it doesnot creat new file) .....only use for modified file from start with replace start word.
//r+ mode show output in terminal(i.e. on screen)
/*
# include<stdio.h>
# include<stdlib.h>

int main(){
    FILE *fp=NULL;
    fp=fopen("2.txt","r+");
    if(fp==NULL){
        printf("Eror\n");
        exit(1);
    }
    // fputs("neta ka",fp);
    fputs("du",fp);
fseek(fp,0,SEEK_SET);
char ch;
while(!feof(fp)){
   ch=fgetc(fp);
    printf("%c",ch);}
    // fputc('R',fp);
    fclose(fp);
    return 0;
}
*/

# include<stdio.h>
# include<stdlib.h>

int main(){
    FILE *fp=NULL;
    fp=fopen("2.txt","r+");
    if(fp==NULL){
        printf("Eror\n");
        exit(1);
    }
    
    fputs("z high school ",fp);
    char ch;
    // 
    fseek(fp,0,SEEK_SET);

    while(!feof(fp)){
   ch=fgetc(fp);
    printf("%c",ch);}
    fclose(fp);
    return 0;
}
