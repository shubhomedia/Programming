#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

#define CAPACITY 10000

struct node
{
    int data;
    struct node *next;
} *front;

int size = 1;

struct node * front = NULL;
struct node * tail = NULL;


int main(){
    int element;
    printf("enter Data\n");
    scanf("%d",&element);
    enqueue(element);
    printf("entered Data\n");
    display();
    printf("enter Data\n");

    scanf("%d",&element);
    enqueue(element);
    printf("enter Data\n");
    scanf("%d",&element);
    enqueue(element);
    printf("enter Data\n");
    scanf("%d",&element);
    enqueue(element);
    display();
    dequeue();
    printf("after dequeue\n");
    display();
    dequeue();
    printf("after dequeue\n");
    display();
    printf("Total element: %d",size);
}

void enqueue(int element)
{
    if (size >= CAPACITY)
    {
        printf("Queue is Full, No Space to add more element in Queue.\n");
        return ;
    }
    struct node * temp = (struct node *) malloc(sizeof(struct node));


    temp->data = element;
    temp->next = NULL;
    if(front == NULL && tail == NULL)
    {
        front=tail=temp;
        return;
    }
    tail->next=temp;
    tail=temp;
    size++;
};

void dequeue(){

    struct node * temp = front;
    if(front == NULL)
        return;

    if(front==tail){
        front=tail=NULL;
    }
    front=front->next;
    free(temp);
    size--;
}

void display()
{
    struct node * temp;

    if (front == NULL) {
        printf("Stack Underflow");
        return;
    }
    else {
        temp = front;
        while (temp != NULL) {
            printf("Data :%d\n",temp->data);
            temp = temp->next;
        }
    }
};



