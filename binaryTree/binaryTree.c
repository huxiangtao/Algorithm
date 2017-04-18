#include<stdio.h>
#include<stdlib.h>

typedef struct binaryTree {
	int data;
	struct binaryTree * left;
	struct binaryTree * right;
}binaryNode;

void createBinTree(binaryNode *);

int main(void) {
	binaryNode * node;
	printf("%d\n",node->data);
	createBinTree(node);
	printf("%d\n",node->data);
	return 0;
}

void createBinTree(binaryNode * node) {
	int n;
	scanf("%d",&n);
	node = (binaryNode *)malloc(sizeof(binaryNode));
	node->data = n;
	node->left=NULL;
	node->right=NULL;
	//createBinTree(node->left);
	//createBinTree(node->right);
}


