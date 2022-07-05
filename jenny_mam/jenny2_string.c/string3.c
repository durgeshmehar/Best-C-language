# include<stdio.h>
# include<string.h>

int main(){
    char name[30];
    int count=0,i=0;
    printf("Enter college");
   //Not used scanf it read upto backspace scanf("%s",name);
   gets(name);
    //printf("%d",strlen(name));
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    printf("String length is %d\n",count);
    return 0;
}  