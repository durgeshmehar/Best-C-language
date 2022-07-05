#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef uint8_t BYTE;
int main(int argc, char *c[])
{
if(argc!=3)
  {   
      fprintf(stderr,"Eror to give input in terminal\n");
      return 1;
  }
FILE *source=fopen(c[1],"r");
if (source == NULL)
{
    printf("Eror in source file pointing\n");
    return 1;
}

FILE *destination=fopen(c[2],"w");
if (destination == NULL)
{   
    fclose(source);
    printf("Eror in destination file pointing\n");
    return 1;
}

BYTE buffer;
while( fread(&buffer,sizeof(BYTE),1,source))
{
    fwrite(&buffer,sizeof(BYTE),1,destination);
}
fclose(source);
fclose(destination);
return 0;
}