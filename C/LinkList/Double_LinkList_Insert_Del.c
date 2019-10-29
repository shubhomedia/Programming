#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
}*head;

void push(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = new_data;
    new_node->next = (*head_ref);
    new_node->prev = NULL;

    if ((*head_ref) != NULL)
        (*head_ref)->prev = new_node;


    (*head_ref) = new_node;
}

void insertAfter(struct node* prev_node, int new_data)
{
    if (prev_node == NULL) {
        printf("the given previous node cannot be NULL");
        return;
    }
    struct node* new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = new_data;
    new_node->next = prev_node->next;
    prev_node->next = new_node;
    new_node->prev = prev_node;

    if (new_node->next != NULL)
        new_node->next->prev = new_node;
}

void append(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    struct node* last = *head_ref;

    new_node->data = new_data;
    new_node->next = NULL;

    if (*head_ref == NULL) {
        new_node->prev = NULL;
        *head_ref = new_node;
        return;
    }

    while (last->next != NULL)
        last = last->next;

    last->next = new_node;
    new_node->prev = last;
    return;
}


void create_linklist(int n){
    struct node *p,*temp;
    int element;
    printf("Enter node element on Number 1 Node: ");
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
    };

void deleteNode(struct node** head_ref, struct node* del)
{
    if (*head_ref == NULL || del == NULL)
        return;
    else if (*head_ref == del)
        *head_ref = del->next;
    else if (del->next != NULL)
        del->next->prev = del->prev;
    else if (del->prev != NULL)
        del->prev->next = del->next;
    free(del);
    return;
}

void main(){
    int n;
    printf("Enter Total Number of node: ");
    scanf("%d",&n);
    create_linklist(n);
    printf("Link List: \n");
    displaydata();
    append(&head,6);
    printf("New Link List: \n");
    displaydata();
    insertAfter(head->next, 8);
    printf("Final Link List: \n");
    displaydata();
    deleteNode(&head, head);
    printf("After Delete First Node of Link List: \n");
    displaydata();
};




