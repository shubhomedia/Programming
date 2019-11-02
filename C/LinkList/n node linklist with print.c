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
