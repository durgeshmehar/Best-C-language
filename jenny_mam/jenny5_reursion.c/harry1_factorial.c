# include<stdio.h>
int fac(int );

int main(){
int a;
printf("Number of factorial enter\n");
scanf("%d",&a);
printf("%d!=%d",a,fac(a));
    return 0;
}
int fac(int m){
    if(m==1 || m==0){
        return 1;
    }
    else{
        return m*fac(m-1);
    }
}
