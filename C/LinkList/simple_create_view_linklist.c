#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
};

void main(){
    struct node *p,*temp,*head;
    int n,element;
    int i = 1;
    printf("Enter Total Number of node: ");
    scanf("%d",&n);
    printf("Enter node element on Number %d Node: ",i);
    scanf("%d",&element);
    temp = (struct node*)malloc(sizeof(struct node));
    temp->data = element;
    temp->next = NULL;
    p=temp;
    head=temp;
    for (int i = 2;i<=n;i++){
            printf("Enter node element on Number %d Node: ",i);
            scanf("%d",&element);
            temp = (struct node *)malloc(sizeof(struct node));
            temp->data=element;
            temp->next= NULL;

            p->next=temp;
            p=p->next;
            };
    temp=head;
    while (temp != NULL) {
        printf(" %d ", temp->data);
        temp = temp->next;
    }
}


