/* # include<stdio.h>

// void fun(int *marks){
void fun(int marks[]){
    for(int i=0;i<4;i++){
        //1 printf("marks %d: %d\n",i+1,*(marks+i);

        printf("marks %d: %d\n",i+1,marks[i]);
    }
    marks[2]=60;
}
int main(){
    int marks[4]={20,30,40,50};
    // fun(&marks[0]);
    fun(marks);
    printf("\nmark 3:%d\n",marks[2]);
    return 0;
}
*/


// multidimensional
# include<stdio.h>
void print(int * marks,int m,int n){
// void print(int  marks[2][3]){
 
     for(int i=0;i<m;i++){
    //  for(int i=0;i<2;i++){
      for(int j=0;j<n;j++){
      // for(int j=0;j<3;j++){
         printf("student %d marks %d\n",i+1,*(marks+i+j));
        //  printf("student %d marks %d\n",i+1,marks[i][j]);
      }
  }
}
int main(){
  int marks[2][3];
  for(int i=0;i<2;i++){
      printf("student %d enter marks\n",i+1);
      for(int j=0;j<3;j++){
          scanf("%d",&marks[i][j]);
      }
  }
  print(&marks[0][0],2,3);
  // print(marks);
    return 0;
}
  