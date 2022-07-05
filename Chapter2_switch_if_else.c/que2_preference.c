# include<stdio.h>

int main(){
    //Value of expression 
    int x=8,y=3,z=3,k=1;
    float m=3*x/y-z+k;
    int s=3*x/y-z+k;
    printf("Result in real value is %f\n",m); //6
    printf("Result in integer is %d\n",s);    //6
    return 0;
}