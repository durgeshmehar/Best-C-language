# include<stdio.h>

int occurance(char *str,char r){
       char *ptr=str;
       int count=0;
       while(*ptr!='\0'){
           if(*ptr==r){
             count++;
             
           }
           ptr++;
       }
       return count;
}

int main(){
    char str[20]="ram bhau ram rr";
    int m=occurance(str,'r');
    printf("count is %d\n",m);
    return 0;
}