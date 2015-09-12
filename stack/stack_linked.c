#include <stdio.h>
#include <stdlib.h>

struct stack_node{
	int value;
	struct stack_node *next;
};

struct stack_node *new_node(int data){
	struct stack_node *stacknode = (struct stack_node*)malloc(sizeof(struct stack_node));
	stacknode->value = data;
	stacknode->next = NULL;
	return stacknode;
}