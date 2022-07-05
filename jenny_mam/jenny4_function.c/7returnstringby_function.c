# include<stdio.h>
char* display();

int main(){
  char *ptr;
     ptr=display();
     ptr[0]='z';   
     //static char str[]="Durgesh"; (only work)
     printf("Name is %s\n",ptr);
    return 0;
}

char* display(){
static char str[]="Durgesh";      //or
//  char *str="Durgesh";  //wrong to change/modify string
    return str;
}
//note:we cant do string modified by pointer defination 
//for that give run time declaration we used const char *str=durgesh
//also at take input of pointer were youalso give same conast char *ptr