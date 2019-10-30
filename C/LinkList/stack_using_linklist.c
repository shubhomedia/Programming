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
