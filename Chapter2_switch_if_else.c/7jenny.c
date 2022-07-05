# include<stdio.h>

int main(){
    //to check enter number is number,special charactor,alphabet
    char a;
    printf("%d of a\n",'a');
    printf("Enter what you want\n");
    scanf("%c",&a);
    if(a>96 && a<=122){
        printf("you enter %c alphabet\n",a);
    }
    else if(a>='0' && a<='9'){
        printf("you enter( %c )Number\n",a);
       
   }
   else{
       printf("special charactor( %c )\n",a);
   }
    return 0;
}