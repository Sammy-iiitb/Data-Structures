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

// Given only a pointer to a node to be deleted in a singly linked list, how do you delete it?

void linked_delete_ref(struct linkedl *node_delete){
	struct linkedl *node = node_delete;
	struct linkedl *node_next = node_delete->next;
	node->next = node_next->next;
	node->value = node_next->value;
	free(node_next);
}

// middle of a given linked list catch here is length of the linked list is takes as odd because 
// if there are even elements then there will be two middle nodes

void linked_middle(struct linkedl *head){
	struct linkedl *node_2 = head->next;
	struct linkedl *node_1 = head;
	while(node_2 != NULL && node_2->next != NULL){
		node_1 = node_1->next;
		node_2 = node_2->next->next;
	}
	printf("%d\n", node_1->value);
}

// nth element from last

void linked_nth_last(struct linkedl *head, int n){
	struct linkedl *node_1 = head;
	struct linkedl *node_2 = head;
	while (n != 1){
		node_1 = node_1->next;
		n = n - 1;
	}
	while (node_1->next != NULL){
		node_1 = node_1->next;
		node_2 = node_2->next;
	}
	printf("%d\n", node_2->value);
}

// delete a linked list

void linked_delete(struct linkedl *head){

}

// counts the number of times a given int occurs in a Linked List

int linked_repeat(struct linkedl *head, int key){
	struct linkedl *node = head;
	int count = 0;
	while (node != NULL){
		if (node->value == key){
			count = count + 1;
		}
		node = node->next;
	}
	printf("%d\n", count);
	return count;
}

// reverseing a single linked list

void linked_reverse(struct linkedl **head_ref){
}

// delete a node in a single linked list

void delete_node(struct linkedl **head_ref){
	
}

int main()
{
  struct linkedl* head = NULL;
  add_front(&head, 6);
  add_front(&head, 7);
  add_front(&head, 5);
  add_last(&head, 5);
  add_last(&head, 5);
  add_middle(head->next, 8);
  //printf("\n Created Linked list is: \n");
  printList(head);
  printf("\n");
  //linked_length(head);
  //linked_search(head, 10);
  //linked_nth(head, 3);
  //linked_middle(head);
  //linked_nth_last(head, 5);
  linked_repeat(head, 1);
  return 0;
}