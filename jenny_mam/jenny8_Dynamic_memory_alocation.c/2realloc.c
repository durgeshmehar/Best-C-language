//realloc()--it is used to resize the previous alloted memory using calloc and malloc
//realloc(void *pointer,size_t size) 
//we not sure that it allocated same block(if possible) or another memory block but feature is previous content is same
//if you reduced size then you lose your original data

# include<stdio.h>
# include<stdlib.h>

int main(){
   int n,i,*ptr=NULL,*ptr1=NULL,n1;
   printf("Enter total number of value\n");
   scanf("%d",&n);
   ptr=(int*)malloc(n*sizeof(int));

   printf("Enter values\n");
   for(i=0;i<n;i++){
       scanf(" %d",(ptr+i));
       
   }
   printf("Update n:\n");
       scanf(" %d",&n1);
   ptr1=(int*)realloc(ptr,n1*sizeof(int));

   printf("Previous adress:%d & Latest adress:%d\n",ptr,ptr1);

   printf("enter value for endended part\n");
for(i=n;i<n1;i++){
    scanf(" %d",ptr+i) ;
}

   printf("Your final enter values are:\n");
    for(i=0;i<n1;i++){
       printf("%d ",*(ptr1+i));
   }

  free(ptr);
  free(ptr1);
    return 0;
}