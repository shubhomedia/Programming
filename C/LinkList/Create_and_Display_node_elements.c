#include<stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *nextpointer;
    struct node *temp;
}*startnode;

void nodeCreate(int n);
void displaydata();

int main(){
    int n;
    printf("Enter Number of node:");
    scanf("%d",&n);
    nodeCreate(n);
    displaydata();
    return 0;
}

void nodeCreate(int n){
    struct node *p, *temp;
    int element,i;
    startnode = (struct node *)malloc(sizeof(struct node));
    if (startnode==NULL){
        printf("no data input\n");
    }else{

        printf("Enter data for node 1:");
        scanf("%d",&element);
        startnode->data=element;
        startnode->nextpointer= NULL;
        temp = startnode;
        for (int i = 2;i<=n;i++){
            p = (struct node *)malloc(sizeof(struct node));
            if (startnode==NULL){
            printf("no data input\n");
            }
            else{
                printf("Enter Node data %d :\n",i);
            scanf("%d",&element);
            p->data=element;
            p->nextpointer= NULL;

            temp->nextpointer=p;
            temp=temp->nextpointer;
            }
        }
    }
}

void displaydata(){
    struct node *temp;
    if(startnode==NULL){
        printf("No data in Node");
    }
    else{
        temp=startnode;
        while(temp!=NULL){
            printf("Data = %d\n",temp->data);
            temp = temp->nextpointer;
        }
    }
}

