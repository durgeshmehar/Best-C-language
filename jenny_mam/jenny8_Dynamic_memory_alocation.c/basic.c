# include<stdio.h>
# include<stdlib.h>

int main(){
    int *ptr=NULL;
    int n=5;
    ptr=malloc(sizeof(int));
    printf("%u\n",ptr);
    printf("%d\n",*ptr);
    return 0;
}