#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

struct node{
    int data;
    struct node *next;
}*head;

void create_linklist();
void displaydata();
int largestElement();
int smallestElement();

void main(){
    int n;
    printf("Enter Total Number of node: ");
    scanf("%d",&n);
    create_linklist(n);
    displaydata();
    largestElement(head);
    smallestElement(head);
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

int largestElement(struct node * head)
{
    int max = INT_MIN;
    while(head!=NULL){
        if(max<head->data)
            max=head->data;
        head=head->next;
    }
    printf("Highest  Value is: %d\n",max);
}

int smallestElement(struct node * head)
{
    int min = INT_MAX;
    while(head!=NULL){
        if(min>head->data)
            min=head->data;
        head=head->next;
    }
    printf("Lowest Value is: %d\n",min);
}


