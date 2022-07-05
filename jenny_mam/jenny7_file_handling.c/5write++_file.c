// w+ mode(reading/writing,if file not exit then it able to creat new file) .....only use for modified file from start.
//first time rewind(file pointer name) is used
//previus content erase and new input save
//inputed data only print in terminal
# include<stdio.h>
# include<stdlib.h>

int main(){
    FILE *fp=NULL;
    fp=fopen("2.txt","w+");
    if(fp==NULL){
        printf("Eror\n");
        exit(1);
    }
    fputs("Durgesh",fp);
    // fputc('R',fp);
    rewind(fp);
    char ch,str[20];
    // fseek(fp,0,SEEK_SET);
    while (!feof(fp))
    {
    //    ch=fgetc(fp);
    //    printf("%c",ch);
    //or
   fgets(str,20,fp);
   printf("%s",str);
    }
    
    return 0;
}