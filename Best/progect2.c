# include<stdio.h>
# include<stdlib.h>
# include<time.h>

int snakewatergun(char you,char comp){
      if(you==comp){
          return 0;
      }
      //*********cases cover sg,sw,ws
      if(you=='s' && comp=='w'){
          return 1;
      }
      else if(you=='w' && comp=='s'){
          return -1;
      }
      //*******
      if(you=='w' && comp=='g'){
          return 1;
      }
      else if(you=='g' && comp=='w'){
          return -1;
      }
      //*********
      if(you=='g' && comp=='s'){
          return 1;
      }
      else if(you=='s' && comp=='g'){
          return -1;
      }
}

int main(){
    char you,comp;
    int number;
    srand(time(0));
    number=rand()%100+1;

     if(number<=33){
        comp='s';}
      else if (number>33 && number<=66){
        comp='w';}

    else{
        comp='g';}

    printf("Enter 's' for snake,'w' for water,'g'for gun\n");
    scanf("%c",&you);
    int result=snakewatergun(you,comp);
    if(result==0){
        printf("--Match Draw--\n");
    }
    else if(result==1){
        printf("Yow Win !!!!\n");
    }
    else{
        printf("You Lose!\n");
    }
    printf("You :%c & computer:%c\n",you,comp);
    return 0;
}