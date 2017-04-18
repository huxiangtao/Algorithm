#include<stdio.h>
#include<stdlib.h>

typedef struct binaryTree {
	int data;
	struct binaryTree * left;
	struct binartTree * right;
}binaryNode;

void createBinTree(binaryNode *);

int main(void) {
	binaryNode * node;
	createBinTree(node);
	return 0;
}

void createBinTree(binaryNode * node) {
	int n;
	scanf("%d",&n);
	node = (binaryNode *)malloc(sizeof(binaryNode));
	node->data = n;
	createBinTree(node->left);
	createBinTree(node->right);
}


