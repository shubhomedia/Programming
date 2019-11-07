#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
}*head;

static void reverse(struct node** head_ref)
{
    struct node* prev_node = NULL;
    struct node* temp = *head_ref;
    struct node* next_node = NULL;
    while (temp != NULL)
    {
        next_node = temp->next;
        temp->next = prev_node;

        prev_node = temp;
        temp = next_node;
    }
    *head_ref = prev_node;
}


void main(){
    int n;
    printf("Enter Total Number of node : ");
    scanf("%d",&n);
    create_linklist(n);
    displaydata();
    reverse(&head);
    printf("Reverse of Link List:\n");
    displaydata();

}

void create_linklist(int n){
    struct node *p,*temp;
    int element;
    printf("Enter node element on Number 1 Node : ");
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
        int counter = 1;
        temp=head;
        while(temp!=NULL){
            printf("Data %d = %d\n",counter,temp->data);
            temp = temp->next;
            counter++;
        }
    }


