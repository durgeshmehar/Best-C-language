# include<stdio.h>
# include<stdlib.h>

int main(){
    char str[25];
    char str1[25];

    printf("Enter name-0:");  
    // scanf("%[^\n]",str); 
    // printf("Enter name-1:");  
    // scanf(" %[^\n]",str1); 
    
   // printf("%s\n",str);
 //**********************
        gets(str);
   printf("%s\n",str);
//************************
    printf("%.3s\n",str);
     puts(str);
      puts(str);

    // printf("name-0:%s\n",str);
    // printf("name-1:%s\n",str1);
    return 0;
}
//skipping initial enter by %*[\n],take input upto press after enter%[^\n]
//skip initial 'a' and take value upto press enter