# include<stdio.h>
# include<stdlib.h>
struct node{
    int number;
    struct node *link;
};

int main(void){
    struct node *head=NULL;
    head=(struct node *)malloc(sizeof(struct node));
    head->number=34;
    head->link=NULL;
    printf("first:%d\n",head->number);



    return 0;
}