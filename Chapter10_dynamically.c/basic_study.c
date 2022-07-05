# include<stdio.h>
# include<stdlib.h>

int main(){
    /*  (1) malloc();  (also use free())
    int *ptr=(int *)malloc(4*sizeof(int));
    for(int i=0;i<4;i++){
    printf("Enter %d number\n",i+1);
    scanf("%d",&ptr[i]);
    }
    for(int i=0;i<4;i++){
    printf("number %d=%d\n",i+1,ptr[i]);
    }
    */
   /*  (2) calloc()  and (3) free() 

   int *ptr=(int *)calloc(4,sizeof(int));
    for(int i=0;i<3;i++){
    printf("Enter %d number\n",i+1);
    scanf("%d",&ptr[i]);
    }
    
    for(int i=0;i<5;i++){
    printf("number %d=%d\n",i+1,ptr[i]);       //output:5 6 7 0 0
    }
    free(ptr);
    */
    /* (4) realloc(ptr,9*sizeof(int))

   int *ptr=(int *)calloc(4,sizeof(int));
    for(int i=0;i<4;i++){
    printf("Enter %d number\n",i+1);
    scanf("%d",&ptr[i]);
    }
    ptr=realloc(ptr,6*sizeof(int));

    for(int i=0;i<6;i++){
    printf("Enter %d number\n",i+1);
    scanf("%d",&ptr[i]);
    }
    for(int i=0;i<6;i++){
    printf("number %d=%d\n",i+1,ptr[i]);      
    }
     
    free(ptr);
    
     */
    return 0;
}