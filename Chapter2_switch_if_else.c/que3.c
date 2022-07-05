# include<stdio.h>

int main(){
    // Income tax 
  float tax=0;
  float income;

    printf("Enter your income\n");
    scanf("%f",&income);

    if(income>=250000 && income<=500000){
    //    tax=tax + (income-300000)*(0.05);     
        tax=tax + (income-250000)*(float)5/100; 
        
    }
    if(income>500000 && income<=1000000){
        //tax=tax + (income-500000)*(0.20);    
        tax=tax + (income-500000)*(20.0/100.0);
    
    }
    if(income>1000000){
       // tax=tax + (income-1000000)*(0.30);  
       tax=tax + (income-1000000)*(30.0/100.0);
    
    }
    printf("Net tax is %.4f\n",tax);
    return 0;
}