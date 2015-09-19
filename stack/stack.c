#include <stdio.h>
#include <stdlib.h>

// creating a stack on integers which will be stored in the array

struct stack{
	int top;
	int size;
	int *array;
};

// create a stack of a given size

struct stack* create_stack(int _size){
	struct stack* _stack = (struct stack*)malloc(sizeof(struct stack));
	_stack->top = -1;
	_stack->size = _size;
	_stack->array = (int *)malloc(_stack->size * sizeof(int));
	return _stack;
}

// basic applications

int isFull(struct stack* _stack){
   if (_stack->top == _stack->size- 1){
		return 1;
	}
	return 0;
}
 
int isEmpty(struct stack* _stack){   
	if (_stack->top == -1){
		return 1;
	}
	return 0;
}

void push(struct stack* _stack, int value){
	if (isFull(_stack)){
		printf("stack is full");
	}
	else {
		_stack->top = _stack->top + 1;
		_stack->array[_stack->top] = value;
	}
}

int pop(struct stack* _stack){
	if (isEmpty(_stack)){
		printf("stack is empty");
		return 0;
	}
	_stack->top = _stack->top - 1;
	return _stack->array[_stack->top+1];
}

void stack_delete(struct stack* _stack){
	if (_stack){
		if (_stack->array){
			free(_stack->array);			
		}
		free(_stack);
	}
}

int main(){
    struct stack* _stack = create_stack(100);
 
    push(_stack, 10);
    push(_stack, 20);
    push(_stack, 30);
 
    printf("%d popped from stack\n", pop(_stack));
 	printf("%d popped from stack\n", pop(_stack));
 	printf("%d popped from stack\n", pop(_stack));
   // printf("Top item is %d\n", peek(stack));
 
    return 0;
}