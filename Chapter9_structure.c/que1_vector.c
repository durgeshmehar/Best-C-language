# include<stdio.h>

struct vector{
    int x;
    int y;
};
struct vector sumvector(struct vector v1,struct vector v2){
    struct vector result;
    result.x=v1.x+v2.x;
    result.y=v1.y+v2.y;
    return result;
}
int main(){
 
    struct vector v1,v2,v3,sum;
    v1.x=4;
    v1.y=7;
    printf("v1: %dx+%dy=0\n",v1.x,v1.y);

    v2.x=2;
    v2.y=8;
    printf("v1: %dx+%dy=0\n",v2.x,v2.y);

    v3.x=34;
    v3.y=38;
    printf("v1: %dx+%dy=0\n",v3.x,v3.y);
    sum=sumvector(v1,v2);
    printf("total x:%d & total y:%d\n",sum.x,sum.y);
    return 0;
}