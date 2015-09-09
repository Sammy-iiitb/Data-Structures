#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>	

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

int linked_length(struct linkedl *head){
	int length = 1;
	while (head->next != NULL){
		head = head->next;
		length = length + 1;
	}
	printf("%d", length);
	return length;
}

// searches the linked list with a particular key and if it is present then return true otherwise false

bool linked_search(struct linkedl *head, int key){
	struct linkedl* node = head;
	while (node->next != NULL){
		if (node->value == key){
			node = node->next;
			printf("true");
			return true;
		}
	printf("false");
	return false;
	}
}

// return the value of the nth node of the linked list

int linked_nth(struct linkedl* head, int index){
	struct linkedl *node = head;
	while(index != 1){
		head = head->next;
		index = index - 1;
	}
	printf("%d",  head->value);
	return head->value;
}

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
  linked_length(head);
  linked_search(head, 10);
  linked_nth(head, 3);
  return 0;
}