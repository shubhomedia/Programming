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

