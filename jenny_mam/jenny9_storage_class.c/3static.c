//static storage class store in ram,scope-within block,function and program scope,lifetime:till the end of the program
//(1)
# include<stdio.h>
static char ch='y';
int y=18;
 static int x=5;
void display();
int main(){
    display();
    display();
    //wrong statement (scope is within block) no(its all over)
    printf("\nx=%d",x);
printf("\ncharactor is :%c",ch);

    return 0;
}
void display(){
   
    x+=10 ;  //x=x+10;
    printf("\nx=%d",x);
}

/*
# include<stdio.h>
int y=5;
void display();

// void main(){
//     int i;
//     int y=5;
//     for(i=0;i<3;i++){
//         display();
//     }      
// }
void display(){
    static int x=5;
    int y=8;
    x++;
    y++;
    printf("x=%d\n",x);
    printf("y=%d\n",y);
}
//x=6,7,8
//y=6,6,6*/