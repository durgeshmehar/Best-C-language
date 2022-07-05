// enum:user defined datatype to assign name to integral constant
// micros. like..#define max 50; this same work as enum  ....not compusary to use enums in program,only for user readibility
// micros are global scope ,,enum for particular value ,used in switch case
# include<stdio.h>

int main(){
    //enum week_days{sun=0,mon=1,tue=2,wed=3,thu=4,fri=5,sat=6};   //default

    enum week_days{sun=2,mon=5,tue,wed,thu,fri};
    enum week_days today,tommorow;

//     enum last_day{sat=10};
//     enum last_day yest=sat;

    today=sun;
//     tommorow=tue;
//     yest=sat;
printf("print today:%d\n",today);
// printf("print tommorow:%d\n",tommorow);
// printf("print tuesday:%d , %d,%d",tue,fri,yest);

    return 0;
}
//problem 1
/*#include <stdio.h>

int main()
{
    int day;
    printf("enter day number as sunday-1,mon-2,tue-3...\n");
    scanf("%d", &day);
    enum day
    {
        sun = 1,
        mon,
        tue,
        wed,
        thu,
        fri,
        sat
    };

    switch(day)
    {
    case sun:
        printf("day:sunday");
        break;
    case mon:
        printf("day:monday");
        break;
    case tue:
        printf("day:tuesday");
        break;
    case wed:
        printf("day:wednesday");
        break;
    case thu:
        printf("day:thursday");
        break;
    case fri:
        printf("day:friday");
        break;
    case sat:
        printf("day:saturday");
        break;
        default:printf("invalid\n");
        break;
    }

    return 0;
}   */

//problem 2
/*
# include<stdio.h>

int main(){
    int gender,price;
    printf("enter male:1,female:2,other:3\n");
    scanf("%d", &gender);
    enum
    {
       male=1,
       female,other
    };
    printf("Enter price\n");
    scanf("%d",&price);

    if(gender==male){
        int dis=((float)25/100)*price;
       printf("Discount :%d \ntotal pay:%d\n",dis,price-dis);
    }
    else if(gender==female){
         int dis=((float)50/100)*price;
       printf("Discount :%d \n total pay:%d\n",dis,price-dis);
    }
    else{
         int dis=((float)60/100)*price;
       printf("Discount :%d \n total pay:%d\n",dis,price-dis);
    }
    return 0;
}   */
//problem 3
/* # include<stdio.h>
enum xenun {c,cpp,java};
enum yenun {xenun };

int main(){
    enum xenun var;
    var=c;
    printf("size:%d\n",sizeof(var)); //4 bytes


return 0;
} */
//problem 4
// # include<stdio.h>
// typedef enum{
//     male,female
// }gender;
// int main(){
//     gender var=female;
//     printf("%d\n",var);

//     return 0;
// }
