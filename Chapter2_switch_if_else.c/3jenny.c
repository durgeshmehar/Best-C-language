#include <stdio.h>
#include <conio.h>

int main()
{
  // unformated input function*/
  // char ch;
  // printf("Enter anything\n");
  
  // ch=getchar();   //you type whole string but output is only one

                      //take all bur print only starting one 
    // ch=getch();     //take only first value after type & print immediatly
    // ch=getche();    //take only one value and print with his input

// printf("output is :%c\n",ch);
//                            
  //  char ch [50];
  //  printf("Enter string\n");
  //  gets(ch);
  // printf("ch=%s\n",ch); 
   

//Unformated output function
  char ch;
//  printf("Enter char\n");
ch =getchar();
//printf("Charactor is %c\n",ch);

// putchar(ch);
// putch (ch);        //define in conio.h
puts("hellow char bhai bhai\n");

      printf("Enter the charactor\n");
      fflush(stdin);
      ch=getchar();
      putch(ch);
      putch('\n');
      putch('k');
      puts("I am very geneous\n"); //One /n already after print
      puts("Durgesh");
return 0;
}