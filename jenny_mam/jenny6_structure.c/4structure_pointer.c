// # include<stdio.h>
// struct employ{
//     int pin;
//     char name[20];
//     float money;
// };
// struct employ e1={1,"jenny",86.54};
// int main(){
//    struct employ *ptr=&e1;
//    printf("roll no:%d\n",(*ptr).pin);
//    printf("name :%s\n",ptr->name);
//    printf("money :%f\n",e1.money);
//     return 0;
// }

//POINTER WAY OF TAKE INPUT AND PRINT OUTPUT
# include<stdio.h>
struct employ{
    int pin;
    char name[20];
    float money;
};
struct employ e1;

int main(){
   struct employ *ptr=&e1;
   printf("enter\n");
   
   scanf("%d %s %f",&ptr->pin,(*ptr).name,&(*ptr).money);

   printf("roll no:%d\n",(*ptr).pin);
   printf("name :%s\n",ptr->name);
   printf("money :%.1f\n",ptr->money);
    return 0;
}
