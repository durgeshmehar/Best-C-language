#include <stdio.h>

int main(){
    int marks[5],sum=0;
    float avg;
    for(int i=0;i<5;i++){
    printf("Enter mark of %d student\n",i+1);
    scanf("%d",&marks[i]);
    sum=sum+marks[i];
    
    }
avg=sum/5;
printf("Sum and Avarage is %d & %f\n",sum,avg);

    
    return 0;
}