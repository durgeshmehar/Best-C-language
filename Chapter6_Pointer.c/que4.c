# include<stdio.h>
void sum_avg(int ,int ,int ,int *,float *);

int main(){
    int a=5,b=7,c=4,sum=0;
    float avg=0;
    sum_avg(a,b,c,&sum,&avg);
    printf("Sum is :%d\n",sum);
    printf("Avarage is :%.2f\n",avg);

    return 0;
}
void sum_avg(int a,int b,int c,int * sum,float * avg){
     *sum=a+b+c;
     *avg=(float)(*sum)/3;
}

