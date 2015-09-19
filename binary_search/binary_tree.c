#include <stdio.h>
#include <stdlib.h>

struct binary {
	int value;
	struct binary *left;
	struct binary *right;
};

// structure for stack

struct stack {
	int size;
	int top;
	struct binary* *array;
};

// add a stack of given size

struct stack* create_Stack(int size){
	struct stack* _stack = (struct stack*)malloc(sizeof(struct stack));
	_stack->size = size;
	_stack->top = -1;
	_stack->array = (struct binary**)malloc(_stack->size * sizeof(struct binary*));
	return stack;
}

// stack operations

int isFull(struct stack* _stack){
	if (_stack->top-1 == _stack->size){
		return 1;
	}
}

int isEmpty(struct stack* _stack){
	if (_stack->top == -1){
		return 1;
	}
}

void push(struct stack *_stack){
}
// add a node in the binary tree

struct binary *new_node(int data){
	struct binary *node = (struct binary*)malloc(sizeof(struct binary));
	node->value = data;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

// inorder traversal in a binary tree

void binary_inorder(struct binary *node){
	if (node == NULL) return;
	binary_inorder(node->left);
	printf("%d ", node->value);
	binary_inorder(node->right);
}

// preorder traversal in a binary tree

void binary_preorder(struct binary *node){
	if (node == NULL) return;
	printf("%d ",node->value);
	binary_preorder(node->left);
	binary_preorder(node->right);
}

// post order traversal in a binary tree

void binary_postorder(struct binary *node){
	if (node == NULL) return;
	binary_postorder(node->left);
	binary_postorder(node->right);
	printf("%d ",node->value);
}

// left most node of binary tree

struct binary *last_node(struct binary *node){
	if (node == NULL){
		return NULL;
	}
	while (node->left != NULL){
		node = node->left;
	}
	return node;
}

// calculate size of a tree 

int binary_size(struct binary *node){
	if (node == NULL) return 0;
	int a;
	binary_size(node->left);
	a = node->value;
	binary_size(node->right);
}

// inorder tree traversal without recursion

void inorder_stack(struct binary *root){
	struct stack *s1 = 
}

int main()
{
  struct binary *root = new_node(1);  
  root->left        = new_node(2);
  root->right       = new_node(3);
  root->left->left  = new_node(4);
  root->left->right   = new_node(5);
  printf("\n Preorder traversal of binary tree is \n");
  binary_preorder(root);
 
     printf("\n Inorder traversal of binary tree is \n");
  binary_inorder(root);  
 
     printf("\n Postorder traversal of binary tree is \n");
  binary_postorder(root);
 
     getchar();
     return 0;
}
