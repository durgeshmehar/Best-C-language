# include<stdio.h>
typedef struct date{
    int date;
    int month;
    int year;
}date;
void print_date(date d){
       printf("Date:%d/%d/%d\n",d.date,d.month,d.year);
}

int compare(date b1,date b2){
 
       if(b1.year>b2.year){
           return 1;
       }
     
       if(b1.year<b2.year){
           return -1;
       }
        if(b1.month>b2.month){
           return 1;
       }
       if(b1.month<b2.month){
           return -1;
       }
        if(b1.date>b2.date){
           return 1;
       }
       if(b1.date<b2.date){
           return -1;
       }
       return 0;
   
}

int main(){
    date d={3,5,2022};
    date d1={8,7,2023};
    date d2={9,7,2024};
    print_date(d);
    int m=compare(d1,d2);

    if(m==1){
        printf("d1 > d2\n");
    }
    else if(m==-1){
        printf("d1 < d2\n");
    }
    else{
        printf("d1=d2\n");
    }
    return 0;
}