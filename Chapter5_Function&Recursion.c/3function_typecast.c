# include<stdio.h>
float far(int deg);

int main(){
    int a;
    printf("Enter temp in deg\n");
    scanf("%d",&a);
    printf("Temperature in farhaneuit is %.2f\n",far(a));
    return 0;
}
float far(int deg){
   float far;
   far=deg*(float)9/5+32;
   return far;
}
