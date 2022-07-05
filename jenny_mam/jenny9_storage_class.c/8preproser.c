//preprocesor(text substitution tool) is not part of compiler
//it understand '#','# define PI 3.142' meaning //PI names as 'micro'.

# include<stdio.h>
# define PI 3.142
# define MSG "durgesh is copleted its c programming by jenny mam"
# define mul(a,b) a*b

# define MAX(a,b)  if(a>b) \
                    printf("a is max\n");\
                   else \
                    printf("b is max\n");



int main(){
     float area;
     area=(PI)*5*5;
     printf("%f\n",area);
     printf("%s\n",MSG);
     printf("multiplication:%d\n",mul(3,4));
     MAX(3,4);
    //  #undef MAX  //eror
    MAX(8,2);
    printf("Date:%s\n",__DATE__);
    printf("Time:%s\n",__TIME__);
    printf("Line number:%d\n",__LINE__);
    printf("ansi:%d\n",__STDC__);

    return 0;
}