// fseek(file pointer,offset,position) function //used to move curser to specific point
// offset-how many bites we moves forward(take ///positive value) or backward(take negative //////value)
/*position-where you want position of origin of curser ex.last,start so it has predefined value
(1)SEEK_SET  ->beginning
(2)SEEK_CUR  ->current position
(3)SEEK_END  ->End of position   */

#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp= NULL;
    fp= fopen("2.txt", "r+");
    if (fp== NULL)
    {
    printf("cant open file\n");
    exit(1);
    }
    fseek(fp,4, SEEK_SET);
    char ch;
  ch=fgetc(fp);
    printf("%c",ch); //durgesh=d(1)u(2)r(3)g(4)e(5)sh 
    //output:e
    fseek(fp,-2,SEEK_CUR);
    char dh;
    dh=fgetc(fp);
    printf("\n%c",dh);  //durgesh=d()u()r(-2)g(-1)e()sh
    //output:g
    fseek(fp,-4,SEEK_END);
    char eh;
    eh=fgetc(fp);
    printf("\n%c",eh);  //mehar=m(-4)e(-3)h(-2)a(-1)r
    //output:r


    // fseek(fp,-4, SEEK_END);
    // char ptr[67];
    // while (!feof(fp))
    // {
    //     fgets(ptr, 56, fp);
    //     printf("%s", ptr);
    // }
    fclose(fp);
    return 0;
}