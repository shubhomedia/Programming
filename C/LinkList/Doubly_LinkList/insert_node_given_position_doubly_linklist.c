#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
    struct node *prev;
}*head;

int main(){
    int node_number;
    int elements;
    int position;
    printf("How many Node? \n");
    scanf("%d",&node_number);
    create_linklist(node_number);
    show_linklist();
    printf("Where you want to add Node? Enter Position\n");
    scanf("%d",&position);
    printf("Where you want to add Node? Enter Data \n");
    scanf("%d",&elements);
    insert_at_n_position(position,elements);
    printf("After adding Node \n");
    show_linklist();


};

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

void insert_at_n_position(int position,int element){
    struct node * new_position,*temp;
    int i;
    new_position = (struct node *)malloc(sizeof(struct node));
    new_position->data=element;
    temp = head;
    if(position==1){
        new_position->next=temp;
        head=new_position;
        return;
    }
    else{
        for(i=1;i<position-1;i++){
            temp=temp->next;

        };
        new_position->prev=temp->prev;
        new_position->next=temp->next;
        temp->next=new_position;
    }

}


