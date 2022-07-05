# include<stdio.h>

typedef struct complex{
    int real;
    int img;
}comp;

void display(comp c){
 printf("Complex number:%d+%dj\n",c.real,c.img);
}

int main(){
    comp cnums[5];
    for(int i=0;i<5;i++){
        printf("Enter real & imaginary Value for %d num\n",i+1);
        scanf("%d %d",&cnums[i].real,&cnums[i].img);
    }
    for(int i=0;i<5;i++){
        display(cnums[i]);
    }
    return 0;
}