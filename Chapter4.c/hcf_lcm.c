// #include <stdio.h>

// int main()
// {
    // HCF
    // int a, b, h;
    // printf("Enter two number\n");
    // scanf("%d %d", &a, &b);
    // for (h = (a > b) ? b : a; h >= 1; h--)
    // {
    //     if (a % h == 0 && b % h == 0)
    //     {
    //         break;
    //     }
    // }

    // printf("HCF is %d\n", h);
    // LCM
    //    int a,b,l;4
# include<stdio.h>

int main(){

int a,b,num,den,h,rem,l;
printf("Enter two number \n");
scanf("%d %d",&a,&b);

int l1=(a>b)?a:b;   //l=a or b
if(l1==a){
    num=a;
    den=b;
}
else{
    num=b;
    den=a;
}
printf("num %d & den %d\n",num,den);
for(h=num;h>=1;h--){
if(a%h==0 && b%h==0){
    break;
}
}
for(l=den;l<=num*den;l++){
    if(l%a==0 && l%b==0){
        break;
    }
}

printf("HCF of GCM is %d\n",h); //8 & 6=2
printf("LCM is %d\n",l);    //8 & 6 =24

    return 0;
}