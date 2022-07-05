//free()--release dynamically allocated memory
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
   printf("adress:%d\n",ptr);
   free(ptr);
   
   //now i try to print so show it undefined behaviour
    

   printf("Your enter values are:\n");
    for(i=0;i<n;i++){
       printf("%d ",*(ptr+i));
   }
printf("adress:%d\n",ptr);
*ptr=0;
*(ptr+1)=3;
*(ptr+2)=5;
for(i=0;i<n;i++){
       printf("%d ",*(ptr+i));
   }
//   free(ptr);

   return 0;
}