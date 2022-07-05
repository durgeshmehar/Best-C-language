# include<stdio.h>

int main(){
  float marks[2][3];
  for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
          printf("enter %d %d number\n",i,j);
          scanf("%f",&marks[i][j]);
      }
  }
    for(int i=0;i<2;i++){
      for(int j=0;j<3;j++){
          printf("Array of %d %d is %f\n",i,j,marks[i][j]);
          
      }
  }
  printf("adress is %d %d\n",&marks[0][0],&marks[0][1]);
    return 0;
}