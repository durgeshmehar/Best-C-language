/*# include<stdio.h>
void display(char[]);
int main(){
    char str[]="jenny";
    display(str);

    return 0;
}
void display(char str[]){
    printf("the string is %s\n",str);
}               */

# include<stdio.h>
void modify(char*,char*); 
//void modify(char[],char[]); 


int main(){
    char str1[]="jenny";
    char str2[]="khatri";
    modify(str1,str2);
    return 0;
}
void modify(char* str1,char* str2){
// void modify(char str1[],char str2[]){
    int count=0;
    for(int i=0;str1[i]!='\0';i++){
   count++;
    }
    printf("length os string %s is %d\n",str1,count );
    str2[0]='K';
    printf("string 2 is %s\n",str2);
}