/* SME-static memory allocation (e.x.int a=10,char arr[45])...during runing progrm no memory free after exit from program then free.
 DME-dynamic memory allocation (functions) ALLOCATE MEMORY BY(1)malloc (2)calloc (3)realloc,DEALLOCATE MEMORY BY (4)free(pointer_name)...during running program unused memory is free.*/
//  1)MALLOC-memory allocation for structure(also for array) from hip section
//     void *malloc(size of datatype)....successful run return base adress and failure return null. (use stdlib.h)  [malloc(size_t size))]
//one block of 20 bytes for malloc(5*sizeof(int)) ....automatic initialised garbage value so not effect efficiency of program


# include<stdio.h>
# include<stdlib.h>

int main(){
   int n,i,*ptr=NULL;
   printf("Enter total number of value\n");
   scanf("%d",&n);
   ptr=(int*)malloc(n*sizeof(int));
   printf("Enter values\n");
   for(i=0;i<n;i++){
       scanf("%d",(ptr+i));
   }
   printf("Your enter values are:\n");
    for(i=0;i<n;i++){
       printf("%d ",*(ptr+i));
   }
  free(ptr);
    return 0;
}

//calloc()->Contiguous allocation (use stdlib.h)....it dynammicaly allocate multiple blocks of memory and each block is of same size
//calloc(size_t n,size_t size)  (no. of block,size of datatype)
//one block of 4 bytes i.e.total 5 block and toatl 20bytes for malloc(5*sizeof(int)) ....automatic initialised zero value in all block so some extent effect to efficiency of program
/*

# include<stdio.h>
# include<stdlib.h>

int main(){
   int n,i,*ptr=NULL;
   printf("Enter total number of value\n");
   scanf("%d",&n);
   ptr=(int*)calloc(n,sizeof(int));
   printf("Enter values\n");
   for(i=0;i<n;i++){
       scanf("%d",(ptr+i));
   }
   printf("Your enter values are:\n");
    for(i=0;i<n;i++){
       printf("%d ",*(ptr+i));
   }
  free(ptr);
    return 0;
}  */