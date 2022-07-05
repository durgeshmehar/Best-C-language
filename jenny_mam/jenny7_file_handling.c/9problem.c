//problem on count no of lines in file 
//problem to sum the enter charactor in file
//  # include<stdio.h>
// # include<stdlib.h>

// int main(){
//     FILE *fp=NULL;
//     int count=1,c=0;
//     char ch;
//     fp=fopen("2.txt","r");
//     if(fp==NULL){
//         printf("Error \n");
//         exit(1);
//     }
//     // while((ch=fgetc(fp))!=EOF)
//     for(ch=fgetc(fp);ch!=EOF;ch=fgetc(fp)){
//         printf("%c",ch);
//         c=c+1;
//         if(ch=='\n'){
//                count=count+1;
//            }

//     }
//     fclose(fp);
//     printf("\nLine count is %d",count);
//     printf("\nCharactor count is %d\n",c-count+1);

//     return 0;
// }        

//Copy the content of one file into another file
# include<stdio.h>
# include<stdlib.h>

int main(){
    FILE *fp1=NULL,*fp2=NULL;
    char str[50];
    fp1=fopen("2.txt","r");
    if(fp1==NULL){
        printf("Error \n");
        exit(1);
    }
   fp2=fopen("1.txt","w");
      if(fp2==NULL){
        printf("Error \n");
        exit(1);
    }
char c;
    while((c=fgetc(fp1))!=EOF){
        fputc(c,fp2);

    }
    
    // while(!feof(fp1)){
    //     fgets(str,50,fp1);
    //     fputs(str,fp2);

    // };
    printf("Succesfully copied\n");
    fclose(fp1);
    fclose(fp2);

    return 0;
}
