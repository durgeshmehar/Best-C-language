# include<stdio.h>
int avg(int [],int);

void main(){
    int marks[5]={10,20,30,40,50},avarage,size;
    size=sizeof(marks)/sizeof(marks[0]);
    avarage=avg(marks,size);
    printf("avarage is %d\n",avarage);
    }

int avg(int marks[],int a){
    int sum=0,avg=0;
    for(int i=0;i<a;i++){
        sum=sum+marks[i];
    }
    avg=sum/a;
    printf("sum:%d\n",sum);
    return avg;
}