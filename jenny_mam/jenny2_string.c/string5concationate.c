# include<stdio.h>
# include<string.h>


int main(){
    char s1[40]="Durgesh ";
    char s2[16]="Mehar shioni";
   
    //1)strcat(s1,s2);

//    printf("%s",s1);
// int l1=strlen(s1);        //7
// int l2=strlen(s2);        //12
// printf("%d %d\n",l1,l2);

//2)  int k=0;
// for(int i=l1;i!=l1+l2;i++){
// s1[i]=s2[k];
// k++;
// }
//***************3)
// for(int i=0;i<=l2;i++){
//     s1[l1+i]=s2[i];
// }
    
//4)
strncat(s1,s2,12);
puts(s1);

    return 0;
}