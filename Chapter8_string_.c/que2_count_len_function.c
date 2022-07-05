# include<stdio.h>
int strlength(char *ptr){
    // char *str=ptr;
    int count=0,i=0;
    while(*ptr!='\0'){
        count++;
        ptr++;
    }
    return count;
}
int main(){
    char str[10]="durgesh";
    printf("String length is %d\n",strlength(str));
    return 0;
}