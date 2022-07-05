# include<stdio.h>
struct employ{
    int pin;
    char name[20];
    float money;
};

int main(){
    struct employ s[3];
    int i=0;
    for(i=0;i<2;i++){
        printf("Information of %d worker\n",i+1);
        scanf("%d %s %f",&s[i].pin,&s[i].name,&s[i].money);
    }
    i=0;
    for(i=0;i<3;i++){
        printf("worker %d:%d %s %.2f\n",i+1,s[i].pin,s[i].name,s[i].money);
    }

    return 0;
}