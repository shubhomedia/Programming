
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
    printf("How many Node? \n");
    scanf("%d",&node_number);
    create_linklist(node_number);
    show_linklist();
    printf("Enter Your element To Find \n");
    scanf("%d",&elements);
    find_element(&head,elements);

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

void find_element(struct node **head_ref,int x)
{
    struct node * temp;
    temp = head;
    while(temp!=NULL){
        if (temp->data == x)
            {
                printf("Found on Linklist\n");
                return 0;
            }
        temp = temp->next;
        }
        printf("Not Found on Linklist\n");
        return ;
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
