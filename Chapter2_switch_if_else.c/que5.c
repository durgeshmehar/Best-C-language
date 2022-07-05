# include<stdio.h>

int main(){
    //lowercase or not check //97-122
    char ch;
    printf("Enter charactor\n");
    scanf("%c",&ch);
    // if(ch<=122 && ch>=97){
    if(ch<='z' && ch>='a'){
        printf("It is lowercase\n");
    }
    else{
        printf("Not lowercase\n");
    }



    return 0;
}