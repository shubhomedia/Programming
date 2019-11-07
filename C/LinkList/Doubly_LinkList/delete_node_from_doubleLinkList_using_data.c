#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
}*head;

void deleteNode(struct node **head_ref, int element)
{
    struct node* temp,*preNode;
    temp = *head_ref, *preNode;
    if (temp != NULL && temp->data == element)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    {
        while (temp != NULL && temp->data != element)
        {
            preNode = temp;
            temp = temp->next;
        }
    }
    if(temp == NULL) return;

    else{
        preNode->next = temp->next;
        free(temp);
    }

}

void main(){
    int n;
    printf("Enter Total Number of node: ");
    scanf("%d",&n);
    create_linklist(n);
    displaydata();
    printf("Enter Your data that want to delete\n");
    scanf("%d",&n);
    deleteNode(&head,n);
    printf("New Linklist is :\n");
    displaydata();

}

void create_linklist(int n){
    struct node *p,*temp;
    int element;
    printf("Enter your first element for Node 1: ");
    scanf("%d",&element);
    head = (struct node *)malloc(sizeof(struct node));
    head->prev = NULL;
    head->data = element;
    head->next = NULL;
    temp = head;
    for(int i = 2 ;i<=n;i++){
        printf("Enter your first element for Node %d: ",i);
        scanf("%d",&element);
        p = (struct node *)malloc(sizeof(struct node));
        p->prev = head;
        p->data = element;
        p->next = NULL;
        temp->next=p;
        temp=temp->next;
        };
};

void displaydata(){
    struct node *temp;
        temp=head;
        while(temp!=NULL){
            printf("Data = %d\n",temp->data);
            temp = temp->next;
        }
    }





