# include<stdio.h>
# include<string.h>

void copy(char *source,char *target){
    char *p1=source;
    char *p2=target;
    
    while(*p1!='\0'){
        *p2=*p1;
        p1++;
        p2++;
    }
}
    

int main(){
    char s[24]="Durgesh Shivani launda@";
    char target[24];
    copy(s,target);
    printf("copy in target is :%s\n",target);
    return 0;
}