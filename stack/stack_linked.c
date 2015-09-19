#include <stdio.h>
#include <stdlib.h>

struct stack_node{
	int value;
	struct stack_node *next;
};

// similar to adding a node to the linked list user can use this function

struct stack_node *new_node(int data){
	struct stack_node *stacknode = (struct stack_node*)malloc(sizeof(struct stack_node));
	stacknode->value = data;
	stacknode->next = NULL;
	return stacknode;
}

// add node to the stack similar to adding node in front of a linked list

void push(struct stack_node** _stack, int data){
	struct stack_node *_new = new_node(data);
	_new->value = data;
	_new->next = *_stack;
	*_stack = _new;
	printf("pushed element %d\n", data
		);
}

// poping from a stack is similar to deleting the first element of a linked list

void pop(struct stack_node** _stack){
	struct stack_node *head = *_stack;	
	struct stack_node *Next = head->next;
	printf("popped %d\n", head->value);
	free(head);
	*_stack = Next;
}

int isEmpty(struct stack_node *_stack){
	if (_stack == NULL){
		return 1;
	}
	return 0;
}

void Delete(struct stack_node* _stack){
	struct stack_node* Next = (struct stack_node*)malloc(sizeof(struct stack_node));
	while (_stack!=NULL){
		Next = _stack->next;
		free(_stack);
		_stack = Next;
	}
}

int main(){
	struct stack_node* root = NULL;
 
    push(&root, 10);
    push(&root, 20);
    push(&root, 30);
    push(&root, 40);
 	pop(&root);
 	pop(&root);
 	pop(&root);
 
	return 0;
}