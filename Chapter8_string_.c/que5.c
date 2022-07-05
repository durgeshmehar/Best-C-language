# include<stdio.h>
void password(char *str){
    char *ptr=str;
    while(*ptr!='\0'){
    *ptr=*ptr+1;
      ptr++;
    }
}

int main(){
    char str[20]="MSCIT1234";
    password(str);
    printf("Encryped string is %s\n",str);
    return 0;
}