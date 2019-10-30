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