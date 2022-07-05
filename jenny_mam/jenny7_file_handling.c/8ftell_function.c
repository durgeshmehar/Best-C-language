//ftell() -> current position of curser
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp= NULL;
    char ch;int pos;
    char str[50];

    fp= fopen("2.txt", "r");
    if (fp== NULL)
    {
    printf("cant open file\n");
    exit(1);
    }
    pos=ftell(fp);
printf("Position:%d\n",pos);
fseek(fp,2,SEEK_SET);
pos=ftell(fp);
printf("Position:%d\n",pos); 


char gh=fgetc(fp);
printf("charactor:%c\n",gh);
printf("Position:%d\n",ftell(fp));
fscanf(fp,"%s",str);
printf("%s\n",str);
printf("Position:%d\n",ftell(fp)); //only word length 
fseek(fp,0,SEEK_END);
printf("Position:%d\n",ftell(fp)); //now length os whole string get
fclose(fp);
return 0;
}