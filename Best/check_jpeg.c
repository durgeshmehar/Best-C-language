#include <stdio.h>
#include <stdint.h>

typedef uint8_t BYTE;
int main(int argc, char *c[])
{
  if(argc!=2)
  {
      return 1;
  }
  FILE *file=fopen(c[1],"r");
  if(file==NULL)
  {
      return 1;
  }
  BYTE bytes[3];
 fread(bytes,sizeof(BYTE),3,file);

  if(bytes[0]==0xff && bytes[1]==0xd8 && bytes[2]==0xff)
  {
     printf("May be jpeg\n");
  }
  else{
      printf("Not jpeg file");
  }
}
