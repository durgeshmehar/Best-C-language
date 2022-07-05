#include<stdio.h>
#include "5depend.c"  
int x=3;
extern void display();


void main(){
   display();
extern int y;
    y++;
    printf("y increment::%d\n",y);
}