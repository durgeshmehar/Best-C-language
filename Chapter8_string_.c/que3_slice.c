# include<stdio.h>
void slice(char *ptr,int m,int n){
    char *str=ptr;
    char s1[20];
    int i=m-1;
    while(i!=n){
       s1[i]=ptr[i];
       printf("%c",s1[i]);
       i++;
    }
    printf("\n");
}

int main(){
    char str[20]="Durgesh Mehar";
    slice(str,1,5);
    slice(str,3,9);
    return 0;
}