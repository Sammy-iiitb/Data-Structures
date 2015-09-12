#include <stdio.h>
#include <stdlib.h>

struct binary {
	int value;
	struct binary *left;
	struct binary *right;
};

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
