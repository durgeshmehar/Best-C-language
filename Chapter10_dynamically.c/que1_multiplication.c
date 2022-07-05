# include<stdio.h>
#include<stdlib.h>

int main(){
    int * ptr=(int *)calloc(10,sizeof(int)),i;
    printf("Multiplication table of 7 upto 10 multiple\n");

    for(i=0;i<10;i++){
    printf("7 X %d = %d\n",i+1,7*(i+1));
    }
    printf("\n");
    printf("Multiplication table of 7 upto 15 multiple\n");

    ptr=realloc(ptr,15*sizeof(int));

    for( i=0;i<15;i++){
    printf("7 X %d = %d\n",i+1,7*(i+1));
    }

    free(ptr);
    return 0;
}