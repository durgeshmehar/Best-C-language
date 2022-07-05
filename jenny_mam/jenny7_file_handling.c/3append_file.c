//In a mode not output in terminal
//append from last
# include<stdio.h>
# include<stdlib.h>

int main(){
    FILE *fp=fopen("2.txt","a");
    char str[50];
    if(fp==NULL){
        printf("Eror\n");
        exit(1);
    }
    printf("Enter content you attend\n");
    gets(str);
    fputs(str,fp);
    // fprintf(fp,"\n%s",str);
printf("Succesfully\n");
    return 0;
}