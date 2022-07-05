# include<stdio.h>
void printarray(int arr[],int a){
    for(int i=0;i<a/2;i++){
      int temp=0;
      temp=arr[i];
      arr[i]=arr[a-i-1];
      arr[a-1-i]=temp;
    }
   
}

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    // for(int i=1;i<=n;i++){
    // printf("%d\n",arr[n-i]);}

    printarray(arr,n);
    for(int i=0;i<6;i++){
      printf("arr[%d]:%d\n",i,arr[i]);
    }
    return 0;
}