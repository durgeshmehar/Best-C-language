#include <stdio.h>

int main()
{
    int marks;
    printf("Enter the marks\n");
    scanf("%d", &marks);

    if (marks > 80)
        printf("A grade\n");

    else if (marks > 70)
        {printf("B grade\n");
        printf("Try hard\n");}

    else if(marks>60){
                printf("c grade\n");}
    else
      printf("Not Much Good Score,But Do Study Hard");
    
    return 0;
}