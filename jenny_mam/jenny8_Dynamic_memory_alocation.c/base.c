# include<stdio.h>
# include<stdlib.h>

typedef struct node{
    int number;
    struct node *next;
}node;

int main(void){
    node *list=NULL;
    node *n =(struct node *)malloc(sizeof(node));
    if(n==NULL){
        return 1;
    }

    n->number=1;
    n->next=NULL;
    list=n;

    n=(struct node *)malloc(sizeof(node));
        if(n==NULL){
        free(list);
        return 1;
    }

    n->number=2;
    n->next=NULL;
    list->next=n;

    n=(struct node *)malloc(sizeof(node));
        if(n==NULL){
        free(list->next);
        return 1;
    }
    n->number=3;
    n->next=NULL;
    list->next->next=n;

    n=(struct node *)malloc(sizeof(node));
        if(n==NULL){
        free(list->next);
        return 1;
    }
    n->number=4;
    n->next=NULL;
    list->next->next->next=n;


    for(node *tmp=list;tmp!=NULL;tmp=tmp->next)
    {
        printf("%d\n",tmp->number);

    }


 while(list !=NULL)
 {
     node *tmp=list->next;
     free(list);
     list=tmp;
 }

    return 0;
}