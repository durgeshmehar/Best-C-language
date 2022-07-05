# include<stdio.h>
int fab(int num);

int main(){
    int num;
    printf("Enter number of nth element\n");
    scanf("%d",&num);
    for(int c=1;c<=num;c++){

        int f=fab(c);
    }
    printf("Your output is %d\n",fab(num));

    return 0;
}
 
int fab(int num){
    if(num==1){
        return 0;}

    else if(num==2){
        return 1;}

    else{
     return fab(num-1)+fab(num-2);
    }


} 