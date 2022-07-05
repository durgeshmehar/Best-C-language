# include<stdio.h>

int main(){
    //highest number
    int a,b,c,d;
    printf("Enter 1st Number\n");
    scanf("%d",&a);
    printf("Enter 2nd Number\n");
    scanf("%d",&b);

    printf("Enter 3rd Number\n");
    scanf("%d",&c);

    printf("Enter 4th Number\n");
    scanf("%d",&d);

     if(a>b && a>c && a>d){printf("number %d is gretest\n",a);};
     if(b>a && b>c && b>d){printf("number %d is gretest\n",b);};
     if(c>a && c>b && c>d){printf("number %d is gretest\n",c);};
     if(d>a && d>b && d>c){printf("number %d is gretest\n",d);};


    return 0;
}