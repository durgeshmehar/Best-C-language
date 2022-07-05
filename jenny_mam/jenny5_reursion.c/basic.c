// # include<stdio.h>
// void display(int );

// int main(){
//      display(3);
//     return 0;
// }
// void display(int a){
//    if(a<1){ return;}
//    else{
//     printf("%d",a);
//     display(a-1);
//   printf("%d",a);
//    }
//   }  
  

//other way to call function

//types of recursion(direct,indirect,tail,nontail)i.e.(1)linear (2)tree

//Direct & Indirect
//Indirect
// # include<stdio.h>
// int fun1(int n);
// int fun2(int n);

// int fun1(int n){
//    if(n<=1)
//    return 1;
//    else 
//    return n*fun2(n-1);
// }
// int fun2(int n){
//       if(n<=1)
//    return 1;
//    else 
//    return n*fun1(n-1);
// }
// void main(){
//    printf("%d",fun1(5));
// }                        

//Tail recursive   (disadvan-space eat more so use loops can do same work)
//   # include<stdio.h>
// void print_num(int a){
//    if(a<1)
//    return;
//    printf("%d",a);
//    print_num(a/2);
// }

// void main(){
//    print_num(10);
// }      

//Non tail recursive  (always draw tree diagram & if return condition not then '}' used as return the function remainning part so thanks)
//Exa.(1)
// # include<stdio.h>
// void print(int a){
//    if(a<1)
//    return;
//    printf("%d ",a);
//    print(a/2);
//    printf("%d ",a);
// }

// void main(){
//    print(10); 
// }                           
// # include<stdio.h>
// int print(int a){
//    if(a<1)
//    return 0;
//    else

//    return 1+print(a/2);
  
// }

// void main(){
//    printf("%d",print(10)); 
   
// } 
 
/*Ex(2)
  # include<stdio.h>
void count(int n)
{
static int d=1;
printf("%d",n);
printf("%d",d);
d++;

if(n>1) 
count(n-1);
printf("%d",d);
}

void main(){
   count(3);
  
}
//31221444*/