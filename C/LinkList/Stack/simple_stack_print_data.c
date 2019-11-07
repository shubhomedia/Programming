#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

#define CAPACITY 10000

struct stack
{
    int data;
    struct stack *next;
}*top;

int size = 0;

int main()
{
    int element;
    printf("Enter your data:");
    scanf("%d",&element);
    push(element);
    display();
    printf("Enter your data:");
    scanf("%d",&element);
    push(element);
    display();
    printf("Enter your data:");
    scanf("%d",&element);
    push(element);
    display();
    pop();
    printf("After pop data\n");
    display();




}

void push(int element)
{
    if (size >= CAPACITY)
    {
        printf("Stack Overflow, No Space to add more element in stack.\n");
        return ;
    }
    struct stack * newNode = (struct stack *) malloc(sizeof(struct stack));

    newNode->data = element;
    newNode->next = top;

    top = newNode;
    size++;
    printf("Data pushed to stack.\n");
};

void display()
{
    struct stack* temp;

    if (top == NULL) {
        printf("Stack Underflow");
        exit(1);
    }
    else {
        temp = top;
        while (temp != NULL) {
            printf("Data :%d\n",temp->data);
            temp = temp->next;
        }
    }
};

int pop()
{
    int data = 0;
    struct stack * topNode;

    if (size <= 0 || !top)
    {
        printf("Stack is empty.\n");
        return INT_MIN;
    }
    topNode = top;

    data = top->data;
    top = top->next;

    free(topNode);
    size--;
    return data;
};
