#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
}*head;

int main(){
    int node_number;
    int elements;
    printf("How many Node? \n");
    scanf("%d",&node_number);
    create_linklist(node_number);
    show_linklist();
    printf("Enter Your First data, want to add Head \n");
    scanf("%d",&elements);
    insert_head(&head,elements);
    printf("After Head data Add\n");
    show_linklist();
    printf("Enter Your First data, want to add End \n");
    scanf("%d",&elements);
    insert_end(&head,elements);
    printf("After end data Add\n");
    show_linklist();

};

void create_linklist(int n){
    struct node *p,*temp;
    int element;
    printf("Enter your first element for Node 1: ");
    scanf("%d",&element);
    head = (struct node *)malloc(sizeof(struct node));
    head->data = element;
    head->next = NULL;
    temp = head;
    for(int i = 2 ;i<=n;i++){
        printf("Enter your first element for Node %d: ",i);
        scanf("%d",&element);
        p = (struct node *)malloc(sizeof(struct node));
        p->data = element;
        p->next = NULL;
        temp->next=p;
        temp=temp->next;
        };
};

void show_linklist(){
    struct node *temp;
    temp=head;
    int counter = 1;
    while(temp!=NULL){
        printf("Data %d = %d\n",counter,temp->data);
        temp= temp->next;
        counter++;
    }
};

void insert_head(struct node ** head_ref,int new_element){
    struct node * new_node;
    new_node =(struct node *)malloc(sizeof(struct node));
    new_node->data = new_element;
    new_node->next = head;
    head = new_node;
};

void insert_end(struct node ** head_ref,int new_element){
    struct node * new_node;
    struct node * temp;
    new_node =(struct node *)malloc(sizeof(struct node));

    temp= *head_ref;
    new_node->data = new_element;
    new_node->next = NULL;
    if(*head_ref == NULL)
        {
        *head_ref = new_node;
        return;
    }
    else{
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next=new_node;
        return;

    }
};

