#include <iostream>
using namespace std;

//함수안에 더블 포인터 쓴이유 

//whenever there is a possibility of "head pointer being changed" in another function, 
//then we should pass address of the variable so that we can view the changes made in head pointer"in our main()".since here head itself is a pointer, so
//we should receive it in a pointer to pointer i.e. **head_pointer.if head could simply be a variable then we would have received it in a simply *head. :-)
struct node
{
	int data;
	struct node* next;

};

void sortedInsert(struct node** head_ref, struct node* new_node)
{
	struct node* current;
	if (*head_ref == NULL || (*head_ref)->data >= new_node->data)
	{
		new_node->next = *head_ref;
		*head_ref = new_node;
	}
	else
	{
		/* Locate the node before the point of insertion */
		current = *head_ref;
		while (current->next != NULL &&
			current->next->data < new_node->data)
		{
			current = current->next;
		}
		new_node->next = current->next;
		current->next = new_node;
	}
}

/* BELOW FUNCTIONS ARE JUST UTILITY TO TEST sortedInsert */

/* A utility function to create a new node */
struct node *newNode(int new_data)
{
	/* allocate node */
	struct node* new_node =
		(struct node*) malloc(sizeof(struct node));

	/* put in the data  */
	new_node->data = new_data;
	new_node->next = NULL;

	return new_node;
}

/* Function to print linked list */
void printList(struct node *head)
{
	struct node *temp = head;
	while (temp != NULL)
	{
		printf("%d  ", temp->data);
		temp = temp->next;
	}
}

/* Drier program to test count function*/
int main()
{
	/* Start with the empty list */
	struct node* head = NULL;
	struct node *new_node = newNode(5);
	sortedInsert(&head, new_node);
	new_node = newNode(10);
	sortedInsert(&head, new_node);
	new_node = newNode(7);
	sortedInsert(&head, new_node);
	new_node = newNode(3);
	sortedInsert(&head, new_node);
	new_node = newNode(1);
	sortedInsert(&head, new_node);
	new_node = newNode(9);
	sortedInsert(&head, new_node);
	printf("\n Created Linked List\n");
	printList(head);

	return 0;
}