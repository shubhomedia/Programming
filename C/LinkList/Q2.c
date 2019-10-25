
#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
}*head;

void create_linklist(int n){
    struct node *p,*temp;
    int element;
    printf("Enter node element on Number 1 Node: ");
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
    };


struct node *getTail(struct node *cur)
{
	while (cur != NULL && cur->next != NULL)
		cur = cur->next;
	return cur;
}

struct node *partition(struct node *head, struct node *end,
					struct node **newHead, struct node **newEnd)
{
	struct node *pivot = end;
	struct node *prev = NULL, *cur = head, *tail = pivot;

	while (cur != pivot)
	{
		if (cur->data < pivot->data)
		{

			if ((*newHead) == NULL)
				(*newHead) = cur;

			prev = cur;
			cur = cur->next;
		}
		else
		{

			if (prev)
				prev->next = cur->next;
			struct Node *tmp = cur->next;
			cur->next = NULL;
			tail->next = cur;
			tail = cur;
			cur = tmp;
		}
	}

	if ((*newHead) == NULL)
		(*newHead) = pivot;

	(*newEnd) = tail;

	return pivot;
}



struct node *quickSortRecur(struct node *head, struct node *end)
{

	if (!head || head == end)
		return head;
	struct node *newHead = NULL, *newEnd = NULL;
	struct node *pivot = partition(head, end, &newHead, &newEnd);

	if (newHead != pivot)
	{
		struct node *tmp = newHead;
		while (tmp->next != pivot)
			tmp = tmp->next;
		tmp->next = NULL;

		newHead = quickSortRecur(newHead, tmp);

		tmp = getTail(newHead);
		tmp->next = pivot;
	}


	pivot->next = quickSortRecur(pivot->next, newEnd);

	return newHead;
}


void quickSort(struct node **headRef)
{
	(*headRef) = quickSortRecur(*headRef, getTail(*headRef));
	return;
}


int main()
{
    int n;
	printf("Enter Total Number of node: ");
    scanf("%d",&n);
    create_linklist(n);
    printf("Linked List before sorting \n");
	displaydata(head);
	quickSort(&head);
	printf("Linked List after sorting \n");
	displaydata(head);
	return 0;
}
