#include<stdio.h>
#include<stdlib.h>
#include <limits.h>

#define CAPACITY 10000

struct node
{
    int data;
    struct node *next;
} *head;

int size = 0;

struct node * front = NULL;
struct node * tail = NULL;

int main()
{
    menu();
}

void menu(){
    int data,n;
    int element;
    printf("Enter Your Option : \n");
    printf("[1] For add New Element of Queue.\n");
    printf("[2] For Delete Element from Queue.\n");
    printf("[3] For Show the number of Element From Stack.\n");
    printf("[4] For Show Minimum and Maximum Element From Stack.\n");
    printf("[5] For Find an Element From Stack.\n");
    printf("[6] For Print all Element From Stack.\n");
    printf("[0] Exit.\n");
    scanf("%d",&n);
    switch(n){
        case 1:
            printf("Enter data to Enqueue into stack: \n");
            scanf("%d",&element);
            enqueue(element);
            menu();
        break;
        case 2:
            dequeue();
            printf("Dequeue Done\n");
            menu();
        break;
        case 3:
            printf("Number of element on Queue: %d\n",size);
            menu();
        break;
        case 4:
            largestElement(front);
            smallestElement(front);
            menu();
        break;
        case 5:
            printf("Enter you data for find into Queue: ");
            scanf("%d", &element);
            search(front,element);
            menu();
        break;
        case 6:
            display();
            menu();
        break;
        case 0:
            exit(0);
    };
};