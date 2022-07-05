# include<stdio.h>

int main(){
    int a[2][3],sum=0;
    for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
          printf("Enter Element of %d %d\n",i,j);
          scanf("%d",&a[i][j]);
      }
  }
      for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
          printf("Array of %d %d is %d\n",i,j,a[i][j]);
          sum=sum+a[i][j];
          
      }
  }
  printf("Sum is %d\n",sum);
  return 0;
}