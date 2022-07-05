# include<stdio.h>
float force(float mass);

int main(){
    int a;
    printf("Enter mass in kg\n");
    scanf("%d",&a);
    printf("force of attraction is %.2f\n",force(a));
    return 0;
}
float force(float mass){
   float f;
   f= mass*9.81;
   return f;

}