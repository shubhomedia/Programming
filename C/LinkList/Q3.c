#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
}*head;

void first(struct node** head_ref, int new_data)
{
    struct node* new_node = (struct node*) malloc(sizeof(struct node));
    new_node->data  = new_data;
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
}



void last(struct node** head_ref, int new_data)
{

	struct node* new_node = (struct node*) malloc(sizeof(struct node));
	struct node *last = *head_ref;

	new_node->data = new_data;
	new_node->next = NULL;

	if (*head_ref == NULL)
	{
	*head_ref = new_node;
	return;
	}


	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}


void main(){
    int n;
    printf("Enter Total Number of node: ");
    scanf("%d",&n);
    create_linklist(n);
    displaydata();
    printf("Enter Your First data want to add Head \n");
    scanf("%d",&n);
    first(&head,n);
    displaydata();
    printf("Enter Your data want to add Last \n");
    scanf("%d",&n);
    last(&head,n);
    displaydata();

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


