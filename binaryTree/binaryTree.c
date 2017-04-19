#include<stdio.h>
#include<stdlib.h>

typedef struct binaryTree {
	int data;
	struct binaryTree * left;
	struct binaryTree * right;
}binaryNode,*biTree;

void createBinTree(biTree*);

int main(void) {
	biTree node;
	printf("%d\n",node->data);
	createBinTree(&node);
	printf("%d\n",node->data);
	return 0;
}

void createBinTree(biTree *node) {
	int n;
	scanf("%d",&n);
	*node = (binaryNode *)malloc(sizeof(binaryNode));
	(*node)->data = n;
	createBinTree(&(*node)->left);
	createBinTree(&(*node)->right);
}


