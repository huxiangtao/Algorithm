#include<stdio.h>
#include<stdlib.h>

typedef struct binaryTree {
	int data;
	struct binaryTree * left;
	struct binartTree * right;
}binaryNode;

void createBinTree(binaryNode *);

void createBinTree(binaryNode * node) {
	int n;
	scanf("%d",&n);
	node = (binaryTree *)malloc(sizeof(binaryNode));
	node->data = n;
	createBinTree(node->left);
	createBinTree(node->right);
}


