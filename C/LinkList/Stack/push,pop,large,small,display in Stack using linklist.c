#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

#define CAPACITY 10000

struct stack
{
    int data;
    struct stack *next;
} *top;

int size = 0;


int main()
{
    menu();
}

void menu(){
    int data,n;
    printf("Enter Your Option : \n");
    printf("[1] For add New Element of Stack.\n");
    printf("[2] For Delete Element from Stack.\n");
    printf("[3] For Show the number of Element From Stack.\n");
    printf("[4] For Show Minimum and Maximum Element From Stack.\n");
    printf("[5] For Find an Element From Stack.\n");
    printf("[6] For Print all Element From Stack.\n");
    printf("[7] For Count How Many Elements on Stack.\n");
    printf("[0] Exit.\n");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Enter data to push into stack: ");
            scanf("%d", &data);
            push(data);
            menu();
        break;
        case 2:
            pop();
            menu();
        break;
        case 3:
            printf("Total Elements: %d\n", size);
            menu();
        break;
        case 4:
            largestElement(top);
            smallestElement(top);
            menu();
        break;
        case 5:
            printf("Enter you data for find into stack: ");
            scanf("%d", &data);
            search(top,data);
            menu();
        break;
        case 6:
            display(top);
            menu();
        break;
        case 7:
            printf("Total Elements: %d\n", size);
            menu();
        break;
        case 0:
            exit(0);
    };
};

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

void search(struct stack* top, int x)
{
    struct stack* current = top;
    while (current != NULL)
    {
        if (current->data == x){
            printf("Found on Stack\n");
            return 0;
        }
        current = current->next;
    }
    printf("Not Found on Stack\n");
    return 0;
}


int largestElement(struct stack * head)
{
    int max = INT_MIN;
    while(head!=NULL){
        if(max<head->data)
            max=head->data;
        head=head->next;
    }
    printf("Highest  Value is: %d\n",max);
}

int smallestElement(struct stack * head)
{
    int min = INT_MAX;
    while(head!=NULL){
        if(min>head->data)
            min=head->data;
        head=head->next;
    }
    printf("Lowest Value is: %d\n",min);
}
