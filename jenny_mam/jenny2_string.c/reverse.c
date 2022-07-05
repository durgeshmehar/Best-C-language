# include<stdio.h>
# include<string.h>

int main(){
    char s1[30]="jayanti";
    char ch;
    // strrev(s1);
    // printf("%s",s1);
    int l=strlen(s1);
    for(int i=0;i<l/2;i++){
        ch=s1[i];
    s1[i]=s1[l-i-1];
    s1[l-i-1]=ch;
    }
    printf("%s",s1);
    return 0;
}