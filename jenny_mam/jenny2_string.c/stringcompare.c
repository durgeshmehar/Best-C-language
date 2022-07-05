# include<stdio.h>
# include<string.h>

int main(){
   char s1[30]="durgesh";
   char s2[30]="durgesha";
   int flag=0;
//    int m=strcmp(s1,s2);
//    if(m==0){
//        printf("Same\n");
//    }
//    else if(m<0){
//        printf("_ve\n");
//    }
//    else{
//        printf(" positive \n");
//    }

for(int i=0;s1[i]!='\0' || s2[i]!='\0';i++){

    if(s1[i]!=s2[i]){
        {
           flag=1;
            break;
        }
    }}
   if(flag==1){
       printf("Not Same\n");
 
}
else{
       printf("Same\n");
}
    return 0;
}