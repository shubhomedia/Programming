#include<stdio.h>
#include<stdlib.h>


struct node{
    int data;
    struct node *next;
}*head;

void create_linklist();
void displaydata();
void deleteNode();

void main(){
    int n;
    int del;
    printf("Enter Total Number of node: ");
    scanf("%d",&n);
    create_linklist(n);
    displaydata();
    printf("Enter delete node number: \n");
    scanf("%d",&del);
    deleteNode(&head,del);
    displaydata();
}

void create_linklist(int n){
    struct node *p,*temp;
    int element;
    printf("Enter node element on Number Node: ");
    scanf("%d",&element);
    head = (struct node*)malloc(sizeof(struct node));
    head->data = element;
    head->next = NULL;
    temp=head;
    for (int i = 2;i<=n;i++){
            printf("Enter node element on Number %d Node: ",i);
            scanf("%d",&element);
            p = (struct node *)malloc(sizeof(struct node));
            p->data=element;
            p->next= NULL;

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


void deleteNode(struct node **head_ref, int position)
{
   if (*head_ref == NULL)
      return;
   struct node* temp = *head_ref;
    if (position == 0)
    {
        *head_ref = temp->next;
        free(temp);
        return;
    }
    for (int i=0; temp!=NULL && i<position-1; i++)
         temp = temp->next;
    if (temp == NULL || temp->next == NULL)
         return;
    struct node *next = temp->next->next;
    free(temp->next);
    temp->next = next;
}


