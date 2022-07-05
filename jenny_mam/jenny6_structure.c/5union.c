//drawback of union is that it update value not store
//it store only last writeen code value and remaining show printf value has garbage value.

# include<stdio.h>
union abc{
    int a;
    char b;
    float c;
};
        //Datatype name= 'union abc'
int main(){
    union abc d;
    //  union abc *ptr=&d;

    d.a=5;
    d.b=101;
    d.c=45.6;
    printf("a:%d\n",d.a);  //Garbage-->a:1110861414
    printf("b: %c\n",d.b);  //Garbage-->b: f
    printf("c:%f\n",d.c);   //right value-->c=45.6 
    return 0;
}