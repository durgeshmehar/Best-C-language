# include<stdio.h>

int main(){
    int math,phy,chem;
    float total;
   
    printf("Enter marks of math\n");
    scanf("%d",&math);
    printf("Enter marks of physics\n");
    scanf("%d",&phy);
    printf("Enter marks of chem\n");
    scanf("%d",&chem);
    total=(math+phy+chem)/3;

    if(total>=40 && math>=33 && phy>=33 && chem>=33){
        printf("Student is passsed with percentage of %d\n", (int)total);}
        
    else{printf("Student is failed with percentage of %f\n",total);}
    return 0;
}