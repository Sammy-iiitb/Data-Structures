#include <stdio.h>
#include <stdlib.h>

struct linkedl{
	int value;
	struct linkedl *next;
};

// adding a node in the linkedlist 
// adding the node in the end

void add_front(struct linkedl **head_ref, int new_value){
	struct linkedl *add_node = (struct linkedl*)malloc(sizeof(struct linkedl));
	add_node->next = *head_ref;
	add_node->value = new_value;
	*head_ref = add_node;
}

// adding the node in the middle

void add_middle(struct linkedl *first_node, int new_value){
	struct linkedl *new_node = (struct linkedl*)malloc(sizeof(struct linkedl));
	new_node->value = new_value;
	new_node->next = first_node->next;
	first_node->next = new_node;
}

// adding the node in the end

void add_last(struct linkedl **head_ref, int new_value){
	struct linkedl *add_node = (struct linkedl*)malloc(sizeof(struct linkedl));
	struct linkedl *traverse = (struct linkedl*)malloc(sizeof(struct linkedl));
	traverse = *head_ref;
	while(traverse->next!=NULL){
		traverse = traverse->next;  
	}
	traverse->next = add_node;
	add_node->value = new_value;
	add_node->next = NULL;
}

// prints the linked list 

void printList(struct linkedl *node)
{
  while (node != NULL)
  {
     printf(" %d ", node->value);
     node = node->next;
  }
}

// find length of a linkedlist

int linked_length()

int main()
{
  struct linkedl* head = NULL;
  add_front(&head, 6);
  add_front(&head, 7);
  add_front(&head, 1);
  add_last(&head, 4);
  add_middle(head->next, 8);
  printf("\n Created Linked list is: ");
  printList(head);
  getchar();
  return 0;
}