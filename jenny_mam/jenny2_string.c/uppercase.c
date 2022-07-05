#include<stdio.h>
#include<string.h>

int main(){
    char ch[30]="DurGESH123";
    strlwr(ch);   //small letter
    puts(ch);
// for(int i=0;ch[i]!='\0';i++){
// if(ch[i]>='A' && ch[i]<='Z'){
//     ch[i]=ch[i]+32;
// }
// }
// printf("%s",ch);
    
    return 0;
} 