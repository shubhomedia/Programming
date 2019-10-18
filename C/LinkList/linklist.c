#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
    struct node *head;
}*head;

int main(){
    int n=0;
    printf("How Many Nodes ?\n");
    scanf("%d",&n);
    printf("Entered Node: %d \n",n);
    createNode(n);
    displaydata();
}

void createNode(int n){
    int data;
    int i = 0;
    struct node *next;
    struct node *temp;
    struct node *p;
    head = (struct node *)malloc(sizeof(struct node));
    if(head==NULL){
        printf("Error In Memory No Data\n");
    }else {
        printf("Enter Your data for node no 1:\n");
        scanf("%d",&data);
        head->data=data;
        head->next=NULL;
        temp = head;
        for(i=2;i<=n;i++){
            p = (struct node *)malloc(sizeof(struct node));
            if (head==NULL){
            printf("No data input\n");
            }
            else{
                printf("Enter Your data for node no %d:\n",i);
                scanf("%d",&data);
                p->data=data;
                p->next=NULL;

                temp->next=p;
                temp=temp->next;
            }
        }
    }
}

void displaydata(){
    struct node *temp;
    if(head==NULL){
        printf("No data in Node");
    }
    else{
        temp=head;
        while(temp!=NULL){
            printf("Data = %d\n",temp->data);
            temp = temp->next;
        }
    }
}

