#include<stdio.h>
#include<conio.h>
#include <stdlib.h>

struct node{
    int num;
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
    struct node *headnode, *temp;
    int num,i;
    startnode = (struct node *)malloc(sizeof(struct node));
    if (startnode==NULL){
        printf("no data input\n");
    }else{

        printf("Enter data for node 1:");
        scanf("%d",&num);
        startnode->num=num;
        startnode->nextpointer= NULL;
        temp = startnode;
        for (int i = 2;i<=n;i++){
            headnode = (struct node *)malloc(sizeof(struct node));
            if (startnode==NULL){
            printf("no data input\n");
            }
            else{
                printf("Enter Node data %d :\n",i);
            scanf("%d",&num);
            headnode->num=num;
            headnode->nextpointer= NULL;

            temp->nextpointer=headnode;
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
            printf("Data = %d\n",temp->num);
            temp = temp->nextpointer;
        }
    }
}

